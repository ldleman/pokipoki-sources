#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->dragFlag = false;



    QString result = Functions::readFile(QCoreApplication::applicationDirPath()+"\\app\\pokipoki.json");
    json = QtJson::Json::parse(result).toMap();




    if(json["contextMenu"].toString()=="true" || json["debugger"].toString()=="true")
        ui->webView->setContextMenuPolicy(Qt::DefaultContextMenu);

    if (json["debugger"].toString()=="true"){
        ui->webView->page()->settings()->setAttribute(QWebSettings::DeveloperExtrasEnabled, true);
    }

    setWindowTitle(json["title"].toString());

    if(json["frameborder"].toString()=="false"){
        setWindowFlags(Qt::FramelessWindowHint);
    }else{
        ui->webView->setStyleSheet("background-color: rgb(255, 255, 255);");
    }


    ui->webView->page()->settings()->setAttribute(QWebSettings::LocalContentCanAccessRemoteUrls,true);
    ui->webView->page()->settings()->setAttribute(QWebSettings::LocalContentCanAccessFileUrls,true);
    ui->webView->page()->settings()->setAttribute(QWebSettings::LocalStorageEnabled,true);
    ui->webView->page()->settings()->setAttribute(QWebSettings::AutoLoadImages,true);
    ui->webView->page()->settings()->setAttribute(QWebSettings::PrivateBrowsingEnabled,true);
    ui->webView->page()->settings()->setMaximumPagesInCache(0);
    ui->webView->page()->settings()->clearMemoryCaches();

    QWebSettings::globalSettings()->setMaximumPagesInCache(0);
    QWebSettings::globalSettings()->setObjectCacheCapacities(0, 0, 0);

    QWebSettings::globalSettings()->setAttribute(QWebSettings::LocalContentCanAccessRemoteUrls,true);
    QWebSettings::globalSettings()->setAttribute(QWebSettings::LocalContentCanAccessFileUrls,true);
    QWebSettings::globalSettings()->setAttribute(QWebSettings::LocalStorageEnabled,true);
    QWebSettings::globalSettings()->setAttribute(QWebSettings::AutoLoadImages,true);
    QWebSettings::globalSettings()->setAttribute(QWebSettings::PrivateBrowsingEnabled,true);
    QWebSettings::globalSettings()->setMaximumPagesInCache(0);
    QWebSettings::globalSettings()->clearMemoryCaches();





    move(QPoint(json["x"].toInt(),json["y"].toInt()));

    resizeWindow(json["width"].toInt(),json["height"].toInt());

    setStyleSheet("background:transparent;");
    setAttribute(Qt::WA_TranslucentBackground);

    QIcon appIcon = QIcon(QCoreApplication::applicationDirPath()+"\\"+json["icon"].toString());
    setWindowIcon(appIcon);


    QAction* actionExit = new QAction( "Quitter", this );
    connect( actionExit, SIGNAL( triggered() ), this, SLOT( close()));
    trayIconMenu = new QMenu( this );
    trayIconMenu->addAction( actionExit );

    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setToolTip(json["title"].toString());
    trayIcon->setContextMenu(trayIconMenu);
    trayIcon->setIcon(appIcon);
    trayIcon->show();



    QString httpconf = Functions::readFile(QCoreApplication::applicationDirPath()+"\\lighttpd\\conf\\lighttpd.tpl.conf");

    httpconf.replace("{{PATH}}",QCoreApplication::applicationDirPath());
    httpconf.replace("{{PORT}}",json["port"].toString());
    Functions::deleteFile(QCoreApplication::applicationDirPath()+"\\lighttpd\\conf\\lighttpd.conf");
    Functions::writeFile(QCoreApplication::applicationDirPath()+"\\lighttpd\\conf\\lighttpd.conf",httpconf);

    QString program = "\""+QCoreApplication::applicationDirPath()+"\\lighttpd\\poki_http.exe\" -f \""+QCoreApplication::applicationDirPath().replace("/","\\")+"\\lighttpd\\conf\\lighttpd.conf\"";

    qDebug(program.toLatin1());
    /*QStringList arguments;
    arguments << "-f" << "\""+QCoreApplication::applicationDirPath()+"\\lighttpd\\conf\\lighttpd.conf\"";*/
    http = new QProcess(parent);

    http->start(program);
    http->waitForFinished();

    QString StdOut = http->readAllStandardOutput(); //Reads standard output
    QString StdError = http->readAllStandardError(); //Reads standard error

    qDebug("\n Printing the standard output..........\n");
    qDebug(StdOut.toLatin1());
    qDebug("\n Printing the standard error..........\n");
    qDebug(StdError.toLatin1());



    program = "\""+QCoreApplication::applicationDirPath()+"\\mysql\\bin\\poki_mysqld.exe\"";
    if(QFile::exists(program)){
        mysql = new QProcess(parent);
        mysql->start(program);
        mysql->waitForFinished();
    }



    ui->webView->load(QUrl("http://127.0.0.1:"+json["port"].toString()));









    connect(ui->webView->page()->mainFrame(), SIGNAL(javaScriptWindowObjectCleared()), this, SLOT(mainFrame_javaScriptWindowObjectCleared()));

    connect(qApp,SIGNAL(aboutToQuit()), this, SLOT(applicationClosed()));
}

void MainWindow::mainFrame_javaScriptWindowObjectCleared(){
    ui->webView->page()->mainFrame()->addToJavaScriptWindowObject("pokipoki", this);
}

MainWindow::~MainWindow()
{
    delete ui;

}
/*
void MainWindow::closeEvent (QCloseEvent *event)
{

    applicationClosed();

}
*/
void MainWindow::applicationClosed(){
    //mysql->close();
   // mysql->kill();
    //delete mysql;

    http->close();
    delete http;
    Functions::pkill("poki_http");
}

void MainWindow::close(){
    qApp->quit();
}
void MainWindow::minimize(){
    showMinimized();

}
void MainWindow::maximize(){
    showMaximized();
}
void MainWindow::restore(){
    showNormal();
}
void MainWindow::dragStart(){
    qDebug("dragstart");
    this->dragFlag = true;
    this->dragPosition = this->mousePosition;

}
void MainWindow::dragStop(){
    this->dragFlag = false;
    this->dragPosition = QPoint(0,0);
    qDebug("dragstop");
}
void MainWindow::dragMove(int x, int y){
    this->mousePosition = QPoint(x,y);
    if(this->dragFlag){

        qDebug("drag "+QString::number(x).toLatin1()+","+QString::number(y).toLatin1());
        move(QPoint(this->x()+x-this->dragPosition.x(),this->y()+y-this->dragPosition.y()));
    }
}


QString MainWindow::execute(QString command){
    qDebug("execute : "+command.toLatin1());
    QString program = command;
    QProcess* process = new QProcess(this);
    process->start(program);
    process->waitForFinished();
    QString StdOut = process->readAllStandardOutput(); //Reads standard output
    QString StdError = process->readAllStandardError(); //Reads standard error

    qDebug("\n Printing the standard output..........\n");
    qDebug(StdOut.toLatin1());
    qDebug("\n Printing the standard error..........\n");
    qDebug(StdError.toLatin1());
    return StdOut;
}

void MainWindow::notify(QString message){
    qDebug("notify : "+message.toLatin1());
    trayIcon->showMessage(json["title"].toString(),message);
}
QString MainWindow::getInfo(QString key){
    qDebug("info");
    QStringList myOptions;
    myOptions << "pid" << "path" << "version" << "os";
    switch(myOptions.indexOf(key)){
        case 0:
            return QString::number(QCoreApplication::applicationPid());
        break;
        case 1:
            return  QCoreApplication::applicationDirPath();
        break;
        case 2:
            return  QCoreApplication::applicationVersion();
        break;
        case 3:
        return Functions::getOs();
        break;
    }
}
void MainWindow::registry(QString path,QString key,QString value){
    qDebug("registry set: "+key.toLatin1());
    QSettings settings(path, QSettings::NativeFormat);
    settings.setValue(key,value);
}
QString MainWindow::registry(QString path,QString key){
    qDebug("registry get: "+key.toLatin1());
    QSettings settings(path, QSettings::NativeFormat);
    return settings.value(key).toString();
}

void MainWindow::moveWindow(int x, int y){
    qDebug("moove");
    move(QPoint(x,y));
}
void MainWindow::resizeWindow(int width, int height){
    qDebug("resize");
    resize(QSize(width,height));
}

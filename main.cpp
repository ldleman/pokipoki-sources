#include <QApplication>
#include <QSplashScreen>
#include <QPluginLoader>

#include <QDir>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPixmap pixmap(QCoreApplication::applicationDirPath()+"\\app\\splash.png");
    QSplashScreen splash(pixmap);
    splash.show();
    a.processEvents();

  /* qApp->addLibraryPath(QCoreApplication::applicationDirPath()+"\\plugins");

    QDir pluginsDir = QDir(qApp->applicationDirPath());
    pluginsDir.cd("plugins");
    foreach (QString fileName, pluginsDir.entryList(QDir::Files)) {
        QPluginLoader loader(pluginsDir.absoluteFilePath(fileName));
        qDebug(fileName.toLatin1());
    }*/


    MainWindow w;
    w.show();

    splash.hide();
    return a.exec();

}

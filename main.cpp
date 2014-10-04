#include <QApplication>
#include <QSplashScreen>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPixmap pixmap(QCoreApplication::applicationDirPath()+"\\app\\splash.png");
    QSplashScreen splash(pixmap);
    splash.show();
    a.processEvents();

    MainWindow w;
    w.show();

    splash.hide();
    return a.exec();

}

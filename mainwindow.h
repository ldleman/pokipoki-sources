#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QWebView>
#include <QWebFrame>
#include <QSystemTrayIcon>
#include <QVBoxLayout>
#include <QMenu>
#include <QSettings>
#include <QCloseEvent>
#include "functions.h"
#include "json.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);


    Q_INVOKABLE void close();
    Q_INVOKABLE void maximize();
    Q_INVOKABLE void minimize();
    Q_INVOKABLE void restore();
    Q_INVOKABLE void dragStart();
    Q_INVOKABLE void  dragStop();
    Q_INVOKABLE void dragMove(int x, int y);

    Q_INVOKABLE QString execute(QString command);
    Q_INVOKABLE void notify(QString message);
    Q_INVOKABLE QString getInfo(QString key);
    Q_INVOKABLE void registry(QString path, QString key, QString value);
    Q_INVOKABLE QString registry(QString path, QString key);
    Q_INVOKABLE void moveWindow(int x, int y);
    Q_INVOKABLE void resizeWindow(int width, int height);

    ~MainWindow();
public slots:
    void mainFrame_javaScriptWindowObjectCleared();
    void applicationClosed();
private:
    Ui::MainWindow *ui;
    bool dragFlag;
    QPoint mousePosition;
    QPoint dragPosition;
    QVariantMap json;
    QProcess *http;
    QProcess *mysql;

    QSystemTrayIcon *trayIcon;
    QMenu *trayIconMenu;
};

#endif // MAINWINDOW_H

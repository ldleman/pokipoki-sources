/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QWebView *webView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMouseTracking(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        centralWidget->setMaximumSize(QSize(16777215, 16777215));
        centralWidget->setAutoFillBackground(false);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        webView = new QWebView(centralWidget);
        webView->setObjectName(QStringLiteral("webView"));
        sizePolicy.setHeightForWidth(webView->sizePolicy().hasHeightForWidth());
        webView->setSizePolicy(sizePolicy);
        webView->setContextMenuPolicy(Qt::NoContextMenu);
        webView->setUrl(QUrl(QStringLiteral("about:blank")));

        gridLayout_2->addWidget(webView, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PokiPoki", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

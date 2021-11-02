/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_11;
    QAction *action_12;
    QAction *action_13;
    QAction *action_14;
    QAction *action_17;
    QAction *actionGB18030;
    QAction *actionUTF_8;
    QAction *action_O;
    QAction *action_A;
    QAction *action_T;
    QAction *action_C;
    QAction *action_N;
    QAction *action_P;
    QAction *action_A_2;
    QAction *action_QT_Q;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_S;
    QMenu *menu_W;
    QMenu *menu_H;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        QFont font;
        font.setPointSize(14);
        action->setFont(font);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_11 = new QAction(MainWindow);
        action_11->setObjectName(QString::fromUtf8("action_11"));
        action_12 = new QAction(MainWindow);
        action_12->setObjectName(QString::fromUtf8("action_12"));
        action_13 = new QAction(MainWindow);
        action_13->setObjectName(QString::fromUtf8("action_13"));
        action_14 = new QAction(MainWindow);
        action_14->setObjectName(QString::fromUtf8("action_14"));
        action_17 = new QAction(MainWindow);
        action_17->setObjectName(QString::fromUtf8("action_17"));
        actionGB18030 = new QAction(MainWindow);
        actionGB18030->setObjectName(QString::fromUtf8("actionGB18030"));
        actionUTF_8 = new QAction(MainWindow);
        actionUTF_8->setObjectName(QString::fromUtf8("actionUTF_8"));
        action_O = new QAction(MainWindow);
        action_O->setObjectName(QString::fromUtf8("action_O"));
        action_A = new QAction(MainWindow);
        action_A->setObjectName(QString::fromUtf8("action_A"));
        action_T = new QAction(MainWindow);
        action_T->setObjectName(QString::fromUtf8("action_T"));
        action_C = new QAction(MainWindow);
        action_C->setObjectName(QString::fromUtf8("action_C"));
        action_N = new QAction(MainWindow);
        action_N->setObjectName(QString::fromUtf8("action_N"));
        action_P = new QAction(MainWindow);
        action_P->setObjectName(QString::fromUtf8("action_P"));
        action_A_2 = new QAction(MainWindow);
        action_A_2->setObjectName(QString::fromUtf8("action_A_2"));
        action_QT_Q = new QAction(MainWindow);
        action_QT_Q->setObjectName(QString::fromUtf8("action_QT_Q"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_S = new QMenu(menu_2);
        menu_S->setObjectName(QString::fromUtf8("menu_S"));
        menu_W = new QMenu(menuBar);
        menu_W->setObjectName(QString::fromUtf8("menu_W"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QString::fromUtf8("menu_H"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_W->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu->addSeparator();
        menu->addAction(action_3);
        menu->addAction(action_4);
        menu->addSeparator();
        menu->addAction(action_5);
        menu_2->addAction(action_17);
        menu_2->addAction(action_11);
        menu_2->addSeparator();
        menu_2->addAction(action_12);
        menu_2->addAction(action_13);
        menu_2->addAction(action_14);
        menu_2->addSeparator();
        menu_2->addAction(menu_S->menuAction());
        menu_S->addAction(actionGB18030);
        menu_S->addAction(actionUTF_8);
        menu_W->addAction(action_O);
        menu_W->addAction(action_A);
        menu_W->addSeparator();
        menu_W->addAction(action_T);
        menu_W->addAction(action_C);
        menu_W->addSeparator();
        menu_W->addAction(action_N);
        menu_W->addAction(action_P);
        menu_H->addAction(action_A_2);
        menu_H->addAction(action_QT_Q);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266(&N)", nullptr));
        action_2->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266(&O)", nullptr));
        action_3->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", nullptr));
        action_4->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&A)", nullptr));
        action_5->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272(&E)", nullptr));
        action_11->setText(QApplication::translate("MainWindow", "\346\201\242\345\244\215(&U)", nullptr));
        action_12->setText(QApplication::translate("MainWindow", "\345\211\252\350\264\264(&T)", nullptr));
        action_13->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266(&C)", nullptr));
        action_14->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264(&P)", nullptr));
        action_17->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200(&R)", nullptr));
        actionGB18030->setText(QApplication::translate("MainWindow", "GB18030", nullptr));
        actionUTF_8->setText(QApplication::translate("MainWindow", "UTF-8", nullptr));
        action_O->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255(&O)", nullptr));
        action_A->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\211\200\346\234\211(&A)", nullptr));
        action_T->setText(QApplication::translate("MainWindow", "\345\271\263\351\223\272(&T)", nullptr));
        action_C->setText(QApplication::translate("MainWindow", "\345\261\202\345\217\240(&C)", nullptr));
        action_N->setText(QApplication::translate("MainWindow", "\344\270\213\344\270\200\344\270\252(&N)", nullptr));
        action_P->setText(QApplication::translate("MainWindow", "\344\270\212\344\270\200\344\270\252(&P)", nullptr));
        action_A_2->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216(&A)", nullptr));
        action_QT_Q->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216QT(&Q)", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266\357\274\210&F\357\274\211", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", nullptr));
        menu_S->setTitle(QApplication::translate("MainWindow", "\347\274\226\347\240\201(&S)", nullptr));
        menu_W->setTitle(QApplication::translate("MainWindow", "\347\252\227\345\217\243(&W)", nullptr));
        menu_H->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

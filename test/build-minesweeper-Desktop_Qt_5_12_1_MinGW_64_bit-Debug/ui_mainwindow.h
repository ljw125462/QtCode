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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_1;
    QAction *action_2;
    QAction *action;
    QAction *action_7;
    QAction *action_8;
    QAction *action_10;
    QAction *action_9;
    QAction *actionsdgsd;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menusdfg;
    QMenu *menudsf;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(420, 325);
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_4->setCheckable(true);
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_5->setCheckable(true);
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QString::fromUtf8("action_6"));
        action_6->setCheckable(true);
        action_1 = new QAction(MainWindow);
        action_1->setObjectName(QString::fromUtf8("action_1"));
        action_1->setCheckable(true);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_2->setCheckable(true);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action->setCheckable(true);
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QString::fromUtf8("action_7"));
        action_7->setCheckable(true);
        action_8 = new QAction(MainWindow);
        action_8->setObjectName(QString::fromUtf8("action_8"));
        action_8->setCheckable(true);
        action_10 = new QAction(MainWindow);
        action_10->setObjectName(QString::fromUtf8("action_10"));
        action_10->setCheckable(true);
        action_9 = new QAction(MainWindow);
        action_9->setObjectName(QString::fromUtf8("action_9"));
        actionsdgsd = new QAction(MainWindow);
        actionsdgsd->setObjectName(QString::fromUtf8("actionsdgsd"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 420, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menu);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menu);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menusdfg = new QMenu(menuBar);
        menusdfg->setObjectName(QString::fromUtf8("menusdfg"));
        menudsf = new QMenu(menusdfg);
        menudsf->setObjectName(QString::fromUtf8("menudsf"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setSizeGripEnabled(false);
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menusdfg->menuAction());
        menu->addAction(action_3);
        menu->addAction(menu_3->menuAction());
        menu->addSeparator();
        menu->addAction(menu_2->menuAction());
        menu->addAction(action_2);
        menu->addSeparator();
        menu->addAction(action_9);
        menu_2->addAction(action_4);
        menu_2->addAction(action_5);
        menu_2->addAction(action_6);
        menu_2->addSeparator();
        menu_2->addAction(action_1);
        menu_3->addAction(action);
        menu_3->addAction(action_7);
        menu_3->addAction(action_8);
        menu_3->addSeparator();
        menu_3->addAction(action_10);
        menusdfg->addAction(menudsf->menuAction());
        menudsf->addAction(actionsdgsd);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\211\253\351\233\267", nullptr));
        action_3->setText(QApplication::translate("MainWindow", "\351\207\215\347\216\251", nullptr));
#ifndef QT_NO_SHORTCUT
        action_3->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_NO_SHORTCUT
        action_4->setText(QApplication::translate("MainWindow", "\345\260\217", nullptr));
#ifndef QT_NO_SHORTCUT
        action_4->setShortcut(QApplication::translate("MainWindow", "Ctrl+7", nullptr));
#endif // QT_NO_SHORTCUT
        action_5->setText(QApplication::translate("MainWindow", "\344\270\255", nullptr));
#ifndef QT_NO_SHORTCUT
        action_5->setShortcut(QApplication::translate("MainWindow", "Ctrl+8", nullptr));
#endif // QT_NO_SHORTCUT
        action_6->setText(QApplication::translate("MainWindow", "\345\244\247", nullptr));
#ifndef QT_NO_SHORTCUT
        action_6->setShortcut(QApplication::translate("MainWindow", "Ctrl+9", nullptr));
#endif // QT_NO_SHORTCUT
        action_1->setText(QApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211...", nullptr));
#ifndef QT_NO_SHORTCUT
        action_1->setShortcut(QApplication::translate("MainWindow", "Ctrl+0", nullptr));
#endif // QT_NO_SHORTCUT
        action_2->setText(QApplication::translate("MainWindow", "\351\253\230\347\262\276\345\272\246\346\227\266\351\227\264", nullptr));
#ifndef QT_NO_SHORTCUT
        action_2->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_NO_SHORTCUT
        action->setText(QApplication::translate("MainWindow", "\345\210\235\347\272\247", nullptr));
#ifndef QT_NO_SHORTCUT
        action->setShortcut(QApplication::translate("MainWindow", "Ctrl+1", nullptr));
#endif // QT_NO_SHORTCUT
        action_7->setText(QApplication::translate("MainWindow", "\344\270\255\347\272\247", nullptr));
#ifndef QT_NO_SHORTCUT
        action_7->setShortcut(QApplication::translate("MainWindow", "Ctrl+2", nullptr));
#endif // QT_NO_SHORTCUT
        action_8->setText(QApplication::translate("MainWindow", "\351\253\230\347\272\247", nullptr));
#ifndef QT_NO_SHORTCUT
        action_8->setShortcut(QApplication::translate("MainWindow", "Ctrl+3", nullptr));
#endif // QT_NO_SHORTCUT
        action_10->setText(QApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211...", nullptr));
#ifndef QT_NO_SHORTCUT
        action_10->setShortcut(QApplication::translate("MainWindow", "Ctrl+4", nullptr));
#endif // QT_NO_SHORTCUT
        action_9->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#ifndef QT_NO_SHORTCUT
        action_9->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionsdgsd->setText(QApplication::translate("MainWindow", "sdgsd ", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\346\270\270\346\210\217", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\226\271\346\240\274\345\244\247\345\260\217", nullptr));
        menu_3->setTitle(QApplication::translate("MainWindow", "\351\232\276\345\272\246", nullptr));
        menusdfg->setTitle(QApplication::translate("MainWindow", "sdfg ", nullptr));
        menudsf->setTitle(QApplication::translate("MainWindow", "dsf '", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

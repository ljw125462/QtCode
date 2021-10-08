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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCar;
    QAction *actionCalc;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *car;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QToolBox *toolBox;
    QWidget *page;
    QGridLayout *gridLayout_3;
    QSplitter *splitter_2;
    QLabel *label_2;
    QComboBox *comboBoxFactory;
    QSplitter *splitter_3;
    QLabel *label_3;
    QComboBox *comboBoxBrand;
    QSplitter *splitter_4;
    QLabel *label_4;
    QLineEdit *lineEditPrice;
    QLabel *label_5;
    QSplitter *splitter_6;
    QLabel *label_6;
    QSpinBox *spinBox;
    QLabel *label_7;
    QLabel *labelLast;
    QSplitter *splitter_5;
    QLabel *label_9;
    QLineEdit *lineEditTotal;
    QLabel *label_10;
    QPushButton *ButtonSure;
    QPushButton *ButtonCancle;
    QWidget *page_2;
    QTextEdit *textEdit;
    QWidget *calc;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(580, 401);
        actionCar = new QAction(MainWindow);
        actionCar->setObjectName(QString::fromUtf8("actionCar"));
        actionCalc = new QAction(MainWindow);
        actionCalc->setObjectName(QString::fromUtf8("actionCalc"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        car = new QWidget();
        car->setObjectName(QString::fromUtf8("car"));
        gridLayout = new QGridLayout(car);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(car);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(splitter);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setMinimumSize(QSize(250, 0));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 250, 227));
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        splitter_2 = new QSplitter(page);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        splitter_2->addWidget(label_2);
        comboBoxFactory = new QComboBox(splitter_2);
        comboBoxFactory->setObjectName(QString::fromUtf8("comboBoxFactory"));
        splitter_2->addWidget(comboBoxFactory);

        gridLayout_3->addWidget(splitter_2, 0, 0, 1, 2);

        splitter_3 = new QSplitter(page);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(splitter_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        splitter_3->addWidget(label_3);
        comboBoxBrand = new QComboBox(splitter_3);
        comboBoxBrand->setObjectName(QString::fromUtf8("comboBoxBrand"));
        splitter_3->addWidget(comboBoxBrand);

        gridLayout_3->addWidget(splitter_3, 1, 0, 1, 2);

        splitter_4 = new QSplitter(page);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(splitter_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        splitter_4->addWidget(label_4);
        lineEditPrice = new QLineEdit(splitter_4);
        lineEditPrice->setObjectName(QString::fromUtf8("lineEditPrice"));
        splitter_4->addWidget(lineEditPrice);
        label_5 = new QLabel(splitter_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        splitter_4->addWidget(label_5);

        gridLayout_3->addWidget(splitter_4, 2, 0, 1, 2);

        splitter_6 = new QSplitter(page);
        splitter_6->setObjectName(QString::fromUtf8("splitter_6"));
        splitter_6->setOrientation(Qt::Horizontal);
        label_6 = new QLabel(splitter_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        splitter_6->addWidget(label_6);
        spinBox = new QSpinBox(splitter_6);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        splitter_6->addWidget(spinBox);
        label_7 = new QLabel(splitter_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        splitter_6->addWidget(label_7);
        labelLast = new QLabel(splitter_6);
        labelLast->setObjectName(QString::fromUtf8("labelLast"));
        splitter_6->addWidget(labelLast);

        gridLayout_3->addWidget(splitter_6, 3, 0, 1, 2);

        splitter_5 = new QSplitter(page);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setOrientation(Qt::Horizontal);
        label_9 = new QLabel(splitter_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        splitter_5->addWidget(label_9);
        lineEditTotal = new QLineEdit(splitter_5);
        lineEditTotal->setObjectName(QString::fromUtf8("lineEditTotal"));
        splitter_5->addWidget(lineEditTotal);
        label_10 = new QLabel(splitter_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        splitter_5->addWidget(label_10);

        gridLayout_3->addWidget(splitter_5, 4, 0, 1, 2);

        ButtonSure = new QPushButton(page);
        ButtonSure->setObjectName(QString::fromUtf8("ButtonSure"));

        gridLayout_3->addWidget(ButtonSure, 5, 0, 1, 1);

        ButtonCancle = new QPushButton(page);
        ButtonCancle->setObjectName(QString::fromUtf8("ButtonCancle"));

        gridLayout_3->addWidget(ButtonCancle, 5, 1, 1, 1);

        toolBox->addItem(page, QString::fromUtf8("\345\207\272\345\224\256\350\275\246\350\276\206"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 250, 227));
        toolBox->addItem(page_2, QString::fromUtf8("\346\226\260\350\275\246\345\205\245\345\272\223"));
        splitter->addWidget(toolBox);
        textEdit = new QTextEdit(splitter);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setReadOnly(true);
        splitter->addWidget(textEdit);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        stackedWidget->addWidget(car);
        calc = new QWidget();
        calc->setObjectName(QString::fromUtf8("calc"));
        stackedWidget->addWidget(calc);

        gridLayout_2->addWidget(stackedWidget, 1, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(224, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(224, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(17);
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 580, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionCar);
        menu->addAction(actionCalc);

        retranslateUi(MainWindow);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionCar->setText(QApplication::translate("MainWindow", "\350\275\246\350\276\206\347\256\241\347\220\206", nullptr));
        actionCalc->setText(QApplication::translate("MainWindow", "\351\224\200\345\224\256\347\273\237\350\256\241", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\345\216\202\345\256\266\357\274\232", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\345\223\201\347\211\214\357\274\232", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\346\212\245\344\273\267\357\274\232", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\344\270\207", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\346\225\260\351\207\217\357\274\232", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\345\211\251\344\275\231\346\225\260\351\207\217\357\274\232", nullptr));
        labelLast->setText(QApplication::translate("MainWindow", "20", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\346\212\245\344\273\267\357\274\232", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\344\270\207", nullptr));
        ButtonSure->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        ButtonCancle->setText(QApplication::translate("MainWindow", "\345\217\226\346\266\210", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "\345\207\272\345\224\256\350\275\246\350\276\206", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "\346\226\260\350\275\246\345\205\245\345\272\223", nullptr));
        label->setText(QApplication::translate("MainWindow", "\350\275\246\350\276\206\347\256\241\347\220\206", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\351\224\200\345\224\256\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

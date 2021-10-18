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
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(650, 650);
        MainWindow->setMinimumSize(QSize(650, 650));
        MainWindow->setMaximumSize(QSize(650, 650));
        MainWindow->setStyleSheet(QString::fromUtf8("background: url(:/background.jfif)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 300, 130, 130));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(26);
        pushButton->setFont(font);
        pushButton->setFocusPolicy(Qt::WheelFocus);
        pushButton->setContextMenuPolicy(Qt::DefaultContextMenu);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.494, stop:0.255682 rgba(255, 177, 177, 255), stop:0.738636 rgba(255, 191, 87, 255), stop:1 rgba(255, 255, 255, 0));\n"
"color: rgb(170, 255, 255);\n"
"border-style: hidden"));
        pushButton->setCheckable(false);
        pushButton->setFlat(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 110, 361, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font1.setPointSize(36);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: yellow;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 530, 331, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Courier New"));
        font2.setPointSize(24);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: rgb(128,255,128)"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\234\260\345\233\276\347\274\226\350\276\221\345\231\250 V1.0", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\350\277\233\345\205\245", nullptr));
        label->setText(QApplication::translate("MainWindow", "\345\234\260\345\233\276\347\274\226\350\276\221\345\231\250 V1.0", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Designed by \351\222\224\351\224\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

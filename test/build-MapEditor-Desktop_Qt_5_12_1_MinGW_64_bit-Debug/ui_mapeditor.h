/********************************************************************************
** Form generated from reading UI file 'mapeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPEDITOR_H
#define UI_MAPEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MapEditor
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_7;
    QListWidget *listWidget;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QLabel *label_6;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;

    void setupUi(QMainWindow *MapEditor)
    {
        if (MapEditor->objectName().isEmpty())
            MapEditor->setObjectName(QString::fromUtf8("MapEditor"));
        MapEditor->resize(1600, 840);
        MapEditor->setMinimumSize(QSize(1600, 840));
        MapEditor->setMaximumSize(QSize(1600, 840));
        QPalette palette;
        QBrush brush(QColor(0, 255, 127, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        MapEditor->setPalette(palette);
        centralWidget = new QWidget(MapEditor);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 130, 121, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        pushButton->setFont(font);
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 210, 121, 31));
        pushButton_2->setFont(font);
        pushButton_2->setAutoDefault(false);
        pushButton_2->setFlat(false);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 170, 121, 31));
        pushButton_3->setFont(font);
        pushButton_3->setAutoDefault(false);
        pushButton_3->setFlat(false);
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 250, 121, 31));
        pushButton_4->setFont(font);
        pushButton_4->setAutoDefault(false);
        pushButton_4->setFlat(false);
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(40, 410, 121, 51));
        pushButton_6->setFont(font);
        pushButton_6->setAcceptDrops(true);
        pushButton_6->setFlat(false);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(470, 780, 391, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 510, 101, 31));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 560, 101, 31));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(40, 290, 121, 31));
        pushButton_7->setFont(font);
        pushButton_7->setAutoDefault(false);
        pushButton_7->setFlat(false);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(1230, 130, 331, 641));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(1230, 70, 161, 51));
        label_4->setFont(font1);
        label_4->setTextFormat(Qt::AutoText);
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(true);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(1400, 70, 161, 51));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setWordWrap(true);
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(40, 330, 121, 31));
        pushButton_5->setFont(font);
        pushButton_5->setAutoDefault(false);
        pushButton_5->setFlat(false);
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(40, 370, 121, 31));
        pushButton_8->setFont(font);
        pushButton_8->setAutoDefault(false);
        pushButton_8->setFlat(false);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(350, 30, 681, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(18);
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignCenter);
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(1070, 30, 121, 31));
        pushButton_9->setFont(font);
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(190, 30, 121, 31));
        pushButton_10->setFont(font);
        pushButton_10->setStyleSheet(QString::fromUtf8(""));
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(190, 780, 121, 31));
        pushButton_11->setFont(font);
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(1070, 780, 121, 31));
        pushButton_12->setFont(font);
        pushButton_13 = new QPushButton(centralWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(40, 780, 121, 31));
        pushButton_13->setFont(font);
        MapEditor->setCentralWidget(centralWidget);

        retranslateUi(MapEditor);

        pushButton->setDefault(false);
        pushButton_2->setDefault(false);
        pushButton_3->setDefault(false);
        pushButton_4->setDefault(false);
        pushButton_7->setDefault(false);
        pushButton_5->setDefault(false);
        pushButton_8->setDefault(false);


        QMetaObject::connectSlotsByName(MapEditor);
    } // setupUi

    void retranslateUi(QMainWindow *MapEditor)
    {
        MapEditor->setWindowTitle(QApplication::translate("MapEditor", "\345\234\260\345\233\276\347\274\226\350\276\221\345\231\250", nullptr));
        pushButton->setText(QApplication::translate("MapEditor", "\346\267\273\345\212\240\347\202\271", nullptr));
        pushButton_2->setText(QApplication::translate("MapEditor", "\346\267\273\345\212\240\350\267\257\345\276\204", nullptr));
        pushButton_3->setText(QApplication::translate("MapEditor", "\345\210\240\351\231\244\347\202\271", nullptr));
        pushButton_4->setText(QApplication::translate("MapEditor", "\345\210\240\351\231\244\350\267\257\345\276\204", nullptr));
        pushButton_6->setText(QApplication::translate("MapEditor", "\346\261\202\346\211\200\346\234\211\350\267\257\345\276\204", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("MapEditor", "\347\202\271\346\225\260\357\274\232", nullptr));
        label_3->setText(QApplication::translate("MapEditor", "\350\267\257\345\276\204\346\225\260\357\274\232", nullptr));
        pushButton_7->setText(QApplication::translate("MapEditor", "\347\274\226\350\276\221\347\202\271\346\240\207\347\255\276", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
        pushButton_5->setText(QApplication::translate("MapEditor", "\344\277\256\346\224\271\350\267\257\345\276\204\351\225\277", nullptr));
        pushButton_8->setText(QApplication::translate("MapEditor", "\346\230\276\347\244\272\350\267\257\345\276\204\351\225\277", nullptr));
        label_6->setText(QApplication::translate("MapEditor", "\346\240\207\351\242\230", nullptr));
        pushButton_9->setText(QApplication::translate("MapEditor", "\344\277\256\346\224\271\346\240\207\351\242\230", nullptr));
        pushButton_10->setText(QApplication::translate("MapEditor", "\346\270\205\351\231\244\345\234\260\345\233\276", nullptr));
        pushButton_11->setText(QApplication::translate("MapEditor", "\350\275\275\345\205\245\345\234\260\345\233\276", nullptr));
        pushButton_12->setText(QApplication::translate("MapEditor", "\344\277\235\345\255\230\345\234\260\345\233\276", nullptr));
        pushButton_13->setText(QApplication::translate("MapEditor", "\346\233\264\346\215\242\350\203\214\346\231\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MapEditor: public Ui_MapEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPEDITOR_H

/********************************************************************************
** Form generated from reading UI file 'modifystuinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYSTUINFO_H
#define UI_MODIFYSTUINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifyStuInfo
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_sid;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_select;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_back;
    QPushButton *pushButton;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_name;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit_age;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QRadioButton *radioButton_man;
    QRadioButton *radioButton_woman;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_7;
    QComboBox *comboBox_province;
    QComboBox *comboBox_city;
    QComboBox *comboBox_county;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_10;
    QComboBox *comboBox_college;
    QComboBox *comboBox_major;
    QComboBox *comboBox_class;
    QLineEdit *lineEdit_showPlace;
    QLineEdit *lineEdit_showMajor;

    void setupUi(QWidget *ModifyStuInfo)
    {
        if (ModifyStuInfo->objectName().isEmpty())
            ModifyStuInfo->setObjectName(QString::fromUtf8("ModifyStuInfo"));
        ModifyStuInfo->resize(500, 333);
        widget = new QWidget(ModifyStuInfo);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 0, 341, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_sid = new QLineEdit(widget);
        lineEdit_sid->setObjectName(QString::fromUtf8("lineEdit_sid"));

        horizontalLayout->addWidget(lineEdit_sid);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_select = new QPushButton(widget);
        pushButton_select->setObjectName(QString::fromUtf8("pushButton_select"));

        horizontalLayout->addWidget(pushButton_select);

        widget_2 = new QWidget(ModifyStuInfo);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(110, 280, 215, 50));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_back = new QPushButton(widget_2);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));

        horizontalLayout_2->addWidget(pushButton_back);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        widget_6 = new QWidget(ModifyStuInfo);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(0, 50, 481, 65));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        widget_3 = new QWidget(widget_6);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_name = new QLineEdit(widget_3);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));

        horizontalLayout_3->addWidget(lineEdit_name);


        horizontalLayout_6->addWidget(widget_3);

        widget_4 = new QWidget(widget_6);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(widget_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        lineEdit_age = new QLineEdit(widget_4);
        lineEdit_age->setObjectName(QString::fromUtf8("lineEdit_age"));

        horizontalLayout_4->addWidget(lineEdit_age);


        horizontalLayout_6->addWidget(widget_4);

        widget_5 = new QWidget(widget_6);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        radioButton_man = new QRadioButton(widget_5);
        radioButton_man->setObjectName(QString::fromUtf8("radioButton_man"));

        horizontalLayout_5->addWidget(radioButton_man);

        radioButton_woman = new QRadioButton(widget_5);
        radioButton_woman->setObjectName(QString::fromUtf8("radioButton_woman"));

        horizontalLayout_5->addWidget(radioButton_woman);


        horizontalLayout_6->addWidget(widget_5);

        widget_8 = new QWidget(ModifyStuInfo);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setGeometry(QRect(40, 110, 361, 65));
        horizontalLayout_8 = new QHBoxLayout(widget_8);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_4 = new QLabel(widget_8);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setEnabled(true);

        horizontalLayout_8->addWidget(label_4);

        widget_7 = new QWidget(widget_8);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_7 = new QHBoxLayout(widget_7);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        comboBox_province = new QComboBox(widget_7);
        comboBox_province->addItem(QString());
        comboBox_province->addItem(QString());
        comboBox_province->addItem(QString());
        comboBox_province->addItem(QString());
        comboBox_province->addItem(QString());
        comboBox_province->addItem(QString());
        comboBox_province->setObjectName(QString::fromUtf8("comboBox_province"));

        horizontalLayout_7->addWidget(comboBox_province);

        comboBox_city = new QComboBox(widget_7);
        comboBox_city->setObjectName(QString::fromUtf8("comboBox_city"));

        horizontalLayout_7->addWidget(comboBox_city);

        comboBox_county = new QComboBox(widget_7);
        comboBox_county->setObjectName(QString::fromUtf8("comboBox_county"));

        horizontalLayout_7->addWidget(comboBox_county);


        horizontalLayout_8->addWidget(widget_7);

        widget_9 = new QWidget(ModifyStuInfo);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setGeometry(QRect(40, 200, 361, 65));
        horizontalLayout_9 = new QHBoxLayout(widget_9);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_6 = new QLabel(widget_9);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setEnabled(true);

        horizontalLayout_9->addWidget(label_6);

        widget_10 = new QWidget(widget_9);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        horizontalLayout_10 = new QHBoxLayout(widget_10);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        comboBox_college = new QComboBox(widget_10);
        comboBox_college->addItem(QString());
        comboBox_college->addItem(QString());
        comboBox_college->addItem(QString());
        comboBox_college->addItem(QString());
        comboBox_college->addItem(QString());
        comboBox_college->addItem(QString());
        comboBox_college->setObjectName(QString::fromUtf8("comboBox_college"));

        horizontalLayout_10->addWidget(comboBox_college);

        comboBox_major = new QComboBox(widget_10);
        comboBox_major->setObjectName(QString::fromUtf8("comboBox_major"));

        horizontalLayout_10->addWidget(comboBox_major);

        comboBox_class = new QComboBox(widget_10);
        comboBox_class->addItem(QString());
        comboBox_class->addItem(QString());
        comboBox_class->addItem(QString());
        comboBox_class->addItem(QString());
        comboBox_class->addItem(QString());
        comboBox_class->addItem(QString());
        comboBox_class->setObjectName(QString::fromUtf8("comboBox_class"));

        horizontalLayout_10->addWidget(comboBox_class);


        horizontalLayout_9->addWidget(widget_10);

        lineEdit_showPlace = new QLineEdit(ModifyStuInfo);
        lineEdit_showPlace->setObjectName(QString::fromUtf8("lineEdit_showPlace"));
        lineEdit_showPlace->setGeometry(QRect(60, 170, 311, 21));
        lineEdit_showPlace->setReadOnly(true);
        lineEdit_showMajor = new QLineEdit(ModifyStuInfo);
        lineEdit_showMajor->setObjectName(QString::fromUtf8("lineEdit_showMajor"));
        lineEdit_showMajor->setGeometry(QRect(60, 260, 311, 21));
        lineEdit_showMajor->setReadOnly(true);

        retranslateUi(ModifyStuInfo);

        QMetaObject::connectSlotsByName(ModifyStuInfo);
    } // setupUi

    void retranslateUi(QWidget *ModifyStuInfo)
    {
        ModifyStuInfo->setWindowTitle(QApplication::translate("ModifyStuInfo", "Form", nullptr));
        label->setText(QApplication::translate("ModifyStuInfo", "\345\255\246\345\217\267\357\274\232", nullptr));
        pushButton_select->setText(QApplication::translate("ModifyStuInfo", "\346\237\245\350\257\242", nullptr));
        pushButton_back->setText(QApplication::translate("ModifyStuInfo", "\350\277\224\345\233\236", nullptr));
        pushButton->setText(QApplication::translate("ModifyStuInfo", "\346\217\220\344\272\244", nullptr));
        label_2->setText(QApplication::translate("ModifyStuInfo", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QApplication::translate("ModifyStuInfo", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_5->setText(QApplication::translate("ModifyStuInfo", "\346\200\247\345\210\253\357\274\232", nullptr));
        radioButton_man->setText(QApplication::translate("ModifyStuInfo", "\347\224\267", nullptr));
        radioButton_woman->setText(QApplication::translate("ModifyStuInfo", "\345\245\263", nullptr));
        label_4->setText(QApplication::translate("ModifyStuInfo", "\347\261\215\350\264\257\357\274\232", nullptr));
        comboBox_province->setItemText(0, QApplication::translate("ModifyStuInfo", "\345\233\233\345\267\235\347\234\201", nullptr));
        comboBox_province->setItemText(1, QApplication::translate("ModifyStuInfo", "\345\214\227\344\272\254\345\270\202", nullptr));
        comboBox_province->setItemText(2, QApplication::translate("ModifyStuInfo", "\344\270\212\346\265\267\345\270\202", nullptr));
        comboBox_province->setItemText(3, QApplication::translate("ModifyStuInfo", "\345\271\277\350\245\277\345\243\256\346\227\217\350\207\252\346\262\273\345\214\272", nullptr));
        comboBox_province->setItemText(4, QApplication::translate("ModifyStuInfo", "\345\271\277\344\270\234\347\234\201", nullptr));
        comboBox_province->setItemText(5, QString());

        label_6->setText(QApplication::translate("ModifyStuInfo", "\344\270\223\344\270\232\357\274\232", nullptr));
        comboBox_college->setItemText(0, QApplication::translate("ModifyStuInfo", "\351\251\254\345\205\213\346\200\235\345\255\246\351\231\242", nullptr));
        comboBox_college->setItemText(1, QApplication::translate("ModifyStuInfo", "\347\256\241\347\220\206\345\255\246\351\231\242", nullptr));
        comboBox_college->setItemText(2, QApplication::translate("ModifyStuInfo", "\350\256\241\347\256\227\346\234\272\344\270\216\350\275\257\344\273\266\345\267\245\347\250\213\345\255\246\351\231\242", nullptr));
        comboBox_college->setItemText(3, QApplication::translate("ModifyStuInfo", "\347\220\206\345\255\246\351\231\242", nullptr));
        comboBox_college->setItemText(4, QApplication::translate("ModifyStuInfo", "\345\244\226\345\233\275\350\257\255\345\255\246\351\231\242", nullptr));
        comboBox_college->setItemText(5, QString());

        comboBox_class->setItemText(0, QApplication::translate("ModifyStuInfo", "1\347\217\255", nullptr));
        comboBox_class->setItemText(1, QApplication::translate("ModifyStuInfo", "2\347\217\255", nullptr));
        comboBox_class->setItemText(2, QApplication::translate("ModifyStuInfo", "3\347\217\255", nullptr));
        comboBox_class->setItemText(3, QApplication::translate("ModifyStuInfo", "4\347\217\255", nullptr));
        comboBox_class->setItemText(4, QApplication::translate("ModifyStuInfo", "5\347\217\255", nullptr));
        comboBox_class->setItemText(5, QString());

    } // retranslateUi

};

namespace Ui {
    class ModifyStuInfo: public Ui_ModifyStuInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYSTUINFO_H

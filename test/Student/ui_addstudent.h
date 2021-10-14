/********************************************************************************
** Form generated from reading UI file 'addstudent.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENT_H
#define UI_ADDSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddStudent
{
public:
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *comboBox_province;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *comboBox_city;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *comboBox_county;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *comboBox_college;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBox_major;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_7;
    QComboBox *comboBox_class;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_2;
    QPushButton *pushButton_submit;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_9;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_name;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_age;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QRadioButton *radioButton_man;
    QRadioButton *radioButton_woman;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_10;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_id;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *lineEdit_pass;

    void setupUi(QWidget *AddStudent)
    {
        if (AddStudent->objectName().isEmpty())
            AddStudent->setObjectName(QStringLiteral("AddStudent"));
        AddStudent->resize(488, 331);
        widget_5 = new QWidget(AddStudent);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(20, 140, 351, 43));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        comboBox_province = new QComboBox(widget_5);
        comboBox_province->setObjectName(QStringLiteral("comboBox_province"));

        horizontalLayout_5->addWidget(comboBox_province);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        comboBox_city = new QComboBox(widget_5);
        comboBox_city->setObjectName(QStringLiteral("comboBox_city"));

        horizontalLayout_5->addWidget(comboBox_city);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        comboBox_county = new QComboBox(widget_5);
        comboBox_county->setObjectName(QStringLiteral("comboBox_county"));

        horizontalLayout_5->addWidget(comboBox_county);

        widget_6 = new QWidget(AddStudent);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setGeometry(QRect(30, 200, 341, 43));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(widget_6);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        comboBox_college = new QComboBox(widget_6);
        comboBox_college->setObjectName(QStringLiteral("comboBox_college"));

        horizontalLayout_6->addWidget(comboBox_college);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        comboBox_major = new QComboBox(widget_6);
        comboBox_major->setObjectName(QStringLiteral("comboBox_major"));

        horizontalLayout_6->addWidget(comboBox_major);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        comboBox_class = new QComboBox(widget_6);
        comboBox_class->setObjectName(QStringLiteral("comboBox_class"));

        horizontalLayout_6->addWidget(comboBox_class);

        widget_7 = new QWidget(AddStudent);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setGeometry(QRect(40, 260, 331, 50));
        horizontalLayout_7 = new QHBoxLayout(widget_7);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pushButton_2 = new QPushButton(widget_7);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_7->addWidget(pushButton_2);

        pushButton_submit = new QPushButton(widget_7);
        pushButton_submit->setObjectName(QStringLiteral("pushButton_submit"));

        horizontalLayout_7->addWidget(pushButton_submit);

        widget_9 = new QWidget(AddStudent);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        widget_9->setGeometry(QRect(0, 70, 481, 65));
        horizontalLayout_9 = new QHBoxLayout(widget_9);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        widget_2 = new QWidget(widget_9);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_name = new QLineEdit(widget_2);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        horizontalLayout_2->addWidget(lineEdit_name);


        horizontalLayout_9->addWidget(widget_2);

        widget_3 = new QWidget(widget_9);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_age = new QLineEdit(widget_3);
        lineEdit_age->setObjectName(QStringLiteral("lineEdit_age"));

        horizontalLayout_3->addWidget(lineEdit_age);


        horizontalLayout_9->addWidget(widget_3);

        widget_4 = new QWidget(widget_9);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        radioButton_man = new QRadioButton(widget_4);
        radioButton_man->setObjectName(QStringLiteral("radioButton_man"));

        horizontalLayout_4->addWidget(radioButton_man);

        radioButton_woman = new QRadioButton(widget_4);
        radioButton_woman->setObjectName(QStringLiteral("radioButton_woman"));

        horizontalLayout_4->addWidget(radioButton_woman);


        horizontalLayout_9->addWidget(widget_4);

        widget_10 = new QWidget(AddStudent);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        widget_10->setGeometry(QRect(0, 10, 411, 65));
        horizontalLayout_10 = new QHBoxLayout(widget_10);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        widget = new QWidget(widget_10);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_id = new QLineEdit(widget);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));

        horizontalLayout->addWidget(lineEdit_id);


        horizontalLayout_10->addWidget(widget);

        widget_8 = new QWidget(widget_10);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        horizontalLayout_8 = new QHBoxLayout(widget_8);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_7 = new QLabel(widget_8);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_8->addWidget(label_7);

        lineEdit_pass = new QLineEdit(widget_8);
        lineEdit_pass->setObjectName(QStringLiteral("lineEdit_pass"));

        horizontalLayout_8->addWidget(lineEdit_pass);


        horizontalLayout_10->addWidget(widget_8);


        retranslateUi(AddStudent);

        QMetaObject::connectSlotsByName(AddStudent);
    } // setupUi

    void retranslateUi(QWidget *AddStudent)
    {
        AddStudent->setWindowTitle(QApplication::translate("AddStudent", "Form", Q_NULLPTR));
        label_5->setText(QApplication::translate("AddStudent", "\347\261\215\350\264\257\357\274\232", Q_NULLPTR));
        comboBox_province->clear();
        comboBox_province->insertItems(0, QStringList()
         << QApplication::translate("AddStudent", "\345\233\233\345\267\235\347\234\201", Q_NULLPTR)
         << QApplication::translate("AddStudent", "\345\214\227\344\272\254\345\270\202", Q_NULLPTR)
         << QApplication::translate("AddStudent", "\344\270\212\346\265\267\345\270\202", Q_NULLPTR)
         << QApplication::translate("AddStudent", "\345\271\277\350\245\277\345\243\256\346\227\217\350\207\252\346\262\273\345\214\272", Q_NULLPTR)
         << QApplication::translate("AddStudent", "\345\271\277\344\270\234\347\234\201", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("AddStudent", "\344\270\223\344\270\232\357\274\232", Q_NULLPTR));
        comboBox_college->clear();
        comboBox_college->insertItems(0, QStringList()
         << QApplication::translate("AddStudent", "\351\251\254\345\205\213\346\200\235\344\270\273\344\271\211\345\255\246\351\231\242", Q_NULLPTR)
         << QApplication::translate("AddStudent", "\347\256\241\347\220\206\345\255\246\351\231\242", Q_NULLPTR)
         << QApplication::translate("AddStudent", "\350\256\241\347\256\227\346\234\272\344\270\216\350\275\257\344\273\266\345\267\245\347\250\213\345\255\246\351\231\242", Q_NULLPTR)
         << QApplication::translate("AddStudent", "\347\220\206\345\255\246\351\231\242", Q_NULLPTR)
         << QApplication::translate("AddStudent", "\345\244\226\345\233\275\350\257\255\345\255\246\351\231\242", Q_NULLPTR)
        );
        comboBox_class->clear();
        comboBox_class->insertItems(0, QStringList()
         << QApplication::translate("AddStudent", "1\347\217\255", Q_NULLPTR)
         << QApplication::translate("AddStudent", "2\347\217\255", Q_NULLPTR)
         << QApplication::translate("AddStudent", "3\347\217\255", Q_NULLPTR)
         << QApplication::translate("AddStudent", "4\347\217\255", Q_NULLPTR)
         << QApplication::translate("AddStudent", "5\347\217\255", Q_NULLPTR)
        );
        pushButton_2->setText(QApplication::translate("AddStudent", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton_submit->setText(QApplication::translate("AddStudent", "\346\217\220\344\272\244", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddStudent", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddStudent", "\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddStudent", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        radioButton_man->setText(QApplication::translate("AddStudent", "\347\224\267", Q_NULLPTR));
        radioButton_woman->setText(QApplication::translate("AddStudent", "\345\245\263", Q_NULLPTR));
        label->setText(QApplication::translate("AddStudent", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("AddStudent", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddStudent: public Ui_AddStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENT_H

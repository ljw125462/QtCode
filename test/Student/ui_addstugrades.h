/********************************************************************************
** Form generated from reading UI file 'addstugrades.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUGRADES_H
#define UI_ADDSTUGRADES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddStuGrades
{
public:
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_stid;
    QLineEdit *lineEdit_math;
    QLineEdit *lineEdit_english;
    QLineEdit *lineEdit_c;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_back;
    QPushButton *pushButton_submit;

    void setupUi(QWidget *AddStuGrades)
    {
        if (AddStuGrades->objectName().isEmpty())
            AddStuGrades->setObjectName(QStringLiteral("AddStuGrades"));
        AddStuGrades->resize(500, 313);
        widget_3 = new QWidget(AddStuGrades);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(20, 28, 289, 171));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);


        horizontalLayout->addWidget(widget_2);

        widget = new QWidget(widget_3);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit_stid = new QLineEdit(widget);
        lineEdit_stid->setObjectName(QStringLiteral("lineEdit_stid"));

        verticalLayout->addWidget(lineEdit_stid);

        lineEdit_math = new QLineEdit(widget);
        lineEdit_math->setObjectName(QStringLiteral("lineEdit_math"));

        verticalLayout->addWidget(lineEdit_math);

        lineEdit_english = new QLineEdit(widget);
        lineEdit_english->setObjectName(QStringLiteral("lineEdit_english"));

        verticalLayout->addWidget(lineEdit_english);

        lineEdit_c = new QLineEdit(widget);
        lineEdit_c->setObjectName(QStringLiteral("lineEdit_c"));

        verticalLayout->addWidget(lineEdit_c);


        horizontalLayout->addWidget(widget);

        widget_4 = new QWidget(AddStuGrades);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(44, 210, 251, 50));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_back = new QPushButton(widget_4);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));

        horizontalLayout_2->addWidget(pushButton_back);

        pushButton_submit = new QPushButton(widget_4);
        pushButton_submit->setObjectName(QStringLiteral("pushButton_submit"));

        horizontalLayout_2->addWidget(pushButton_submit);


        retranslateUi(AddStuGrades);

        QMetaObject::connectSlotsByName(AddStuGrades);
    } // setupUi

    void retranslateUi(QWidget *AddStuGrades)
    {
        AddStuGrades->setWindowTitle(QApplication::translate("AddStuGrades", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("AddStuGrades", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddStuGrades", "\346\225\260\345\255\246\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddStuGrades", "\350\213\261\350\257\255\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddStuGrades", "C++:", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("AddStuGrades", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton_submit->setText(QApplication::translate("AddStuGrades", "\346\217\220\344\272\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddStuGrades: public Ui_AddStuGrades {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUGRADES_H

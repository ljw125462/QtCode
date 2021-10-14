/********************************************************************************
** Form generated from reading UI file 'stumodifypassself.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUMODIFYPASSSELF_H
#define UI_STUMODIFYPASSSELF_H

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

class Ui_StuModifyPassSelf
{
public:
    QWidget *widget_5;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_oldPass;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_newPass;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_againPass;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_back;
    QPushButton *pushButton_modifyPass;

    void setupUi(QWidget *StuModifyPassSelf)
    {
        if (StuModifyPassSelf->objectName().isEmpty())
            StuModifyPassSelf->setObjectName(QStringLiteral("StuModifyPassSelf"));
        StuModifyPassSelf->resize(431, 309);
        widget_5 = new QWidget(StuModifyPassSelf);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(50, 40, 297, 222));
        verticalLayout = new QVBoxLayout(widget_5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(widget_5);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_oldPass = new QLineEdit(widget);
        lineEdit_oldPass->setObjectName(QStringLiteral("lineEdit_oldPass"));
        lineEdit_oldPass->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        horizontalLayout->addWidget(lineEdit_oldPass);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_5);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_newPass = new QLineEdit(widget_2);
        lineEdit_newPass->setObjectName(QStringLiteral("lineEdit_newPass"));
        lineEdit_newPass->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        horizontalLayout_2->addWidget(lineEdit_newPass);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(widget_5);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_againPass = new QLineEdit(widget_3);
        lineEdit_againPass->setObjectName(QStringLiteral("lineEdit_againPass"));
        lineEdit_againPass->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        horizontalLayout_3->addWidget(lineEdit_againPass);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_back = new QPushButton(widget_4);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));

        horizontalLayout_4->addWidget(pushButton_back);

        pushButton_modifyPass = new QPushButton(widget_4);
        pushButton_modifyPass->setObjectName(QStringLiteral("pushButton_modifyPass"));

        horizontalLayout_4->addWidget(pushButton_modifyPass);


        verticalLayout->addWidget(widget_4);


        retranslateUi(StuModifyPassSelf);

        QMetaObject::connectSlotsByName(StuModifyPassSelf);
    } // setupUi

    void retranslateUi(QWidget *StuModifyPassSelf)
    {
        StuModifyPassSelf->setWindowTitle(QApplication::translate("StuModifyPassSelf", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("StuModifyPassSelf", "\345\210\235\345\247\213\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("StuModifyPassSelf", "\346\226\260\346\224\271\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("StuModifyPassSelf", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("StuModifyPassSelf", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton_modifyPass->setText(QApplication::translate("StuModifyPassSelf", "\344\277\256\346\224\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StuModifyPassSelf: public Ui_StuModifyPassSelf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUMODIFYPASSSELF_H

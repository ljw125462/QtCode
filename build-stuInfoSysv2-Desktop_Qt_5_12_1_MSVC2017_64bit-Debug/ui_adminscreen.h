/********************************************************************************
** Form generated from reading UI file 'adminscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINSCREEN_H
#define UI_ADMINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminScreen
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_infoShow;
    QPushButton *pushButton_addInfo;
    QPushButton *pushButton_gradeShow;
    QPushButton *pushButton_modiAdPass;
    QPushButton *pushButton_modyInfo;
    QPushButton *pushButton_modiStuP;
    QPushButton *pushButton_addGrade;

    void setupUi(QWidget *AdminScreen)
    {
        if (AdminScreen->objectName().isEmpty())
            AdminScreen->setObjectName(QString::fromUtf8("AdminScreen"));
        AdminScreen->resize(500, 333);
        widget = new QWidget(AdminScreen);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 0, 181, 331));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_infoShow = new QPushButton(widget);
        pushButton_infoShow->setObjectName(QString::fromUtf8("pushButton_infoShow"));

        verticalLayout->addWidget(pushButton_infoShow);

        pushButton_addInfo = new QPushButton(widget);
        pushButton_addInfo->setObjectName(QString::fromUtf8("pushButton_addInfo"));

        verticalLayout->addWidget(pushButton_addInfo);

        pushButton_gradeShow = new QPushButton(widget);
        pushButton_gradeShow->setObjectName(QString::fromUtf8("pushButton_gradeShow"));

        verticalLayout->addWidget(pushButton_gradeShow);

        pushButton_modiAdPass = new QPushButton(widget);
        pushButton_modiAdPass->setObjectName(QString::fromUtf8("pushButton_modiAdPass"));

        verticalLayout->addWidget(pushButton_modiAdPass);

        pushButton_modyInfo = new QPushButton(widget);
        pushButton_modyInfo->setObjectName(QString::fromUtf8("pushButton_modyInfo"));

        verticalLayout->addWidget(pushButton_modyInfo);

        pushButton_modiStuP = new QPushButton(widget);
        pushButton_modiStuP->setObjectName(QString::fromUtf8("pushButton_modiStuP"));

        verticalLayout->addWidget(pushButton_modiStuP);

        pushButton_addGrade = new QPushButton(widget);
        pushButton_addGrade->setObjectName(QString::fromUtf8("pushButton_addGrade"));

        verticalLayout->addWidget(pushButton_addGrade);


        retranslateUi(AdminScreen);

        QMetaObject::connectSlotsByName(AdminScreen);
    } // setupUi

    void retranslateUi(QWidget *AdminScreen)
    {
        AdminScreen->setWindowTitle(QApplication::translate("AdminScreen", "Form", nullptr));
        pushButton_infoShow->setText(QApplication::translate("AdminScreen", "\345\255\246\347\224\237\344\277\241\346\201\257\345\261\225\347\244\272", nullptr));
        pushButton_addInfo->setText(QApplication::translate("AdminScreen", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        pushButton_gradeShow->setText(QApplication::translate("AdminScreen", "\346\210\220\347\273\251\345\261\225\347\244\272", nullptr));
        pushButton_modiAdPass->setText(QApplication::translate("AdminScreen", "\344\277\256\346\224\271\347\256\241\347\220\206\345\221\230\345\257\206\347\240\201", nullptr));
        pushButton_modyInfo->setText(QApplication::translate("AdminScreen", "\344\277\256\346\224\271\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        pushButton_modiStuP->setText(QApplication::translate("AdminScreen", "\344\277\256\346\224\271\345\255\246\347\224\237\345\257\206\347\240\201", nullptr));
        pushButton_addGrade->setText(QApplication::translate("AdminScreen", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminScreen: public Ui_AdminScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSCREEN_H

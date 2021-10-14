/********************************************************************************
** Form generated from reading UI file 'adminscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINSCREEN_H
#define UI_ADMINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            AdminScreen->setObjectName(QStringLiteral("AdminScreen"));
        AdminScreen->resize(500, 333);
        widget = new QWidget(AdminScreen);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 0, 181, 331));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_infoShow = new QPushButton(widget);
        pushButton_infoShow->setObjectName(QStringLiteral("pushButton_infoShow"));

        verticalLayout->addWidget(pushButton_infoShow);

        pushButton_addInfo = new QPushButton(widget);
        pushButton_addInfo->setObjectName(QStringLiteral("pushButton_addInfo"));

        verticalLayout->addWidget(pushButton_addInfo);

        pushButton_gradeShow = new QPushButton(widget);
        pushButton_gradeShow->setObjectName(QStringLiteral("pushButton_gradeShow"));

        verticalLayout->addWidget(pushButton_gradeShow);

        pushButton_modiAdPass = new QPushButton(widget);
        pushButton_modiAdPass->setObjectName(QStringLiteral("pushButton_modiAdPass"));

        verticalLayout->addWidget(pushButton_modiAdPass);

        pushButton_modyInfo = new QPushButton(widget);
        pushButton_modyInfo->setObjectName(QStringLiteral("pushButton_modyInfo"));

        verticalLayout->addWidget(pushButton_modyInfo);

        pushButton_modiStuP = new QPushButton(widget);
        pushButton_modiStuP->setObjectName(QStringLiteral("pushButton_modiStuP"));

        verticalLayout->addWidget(pushButton_modiStuP);

        pushButton_addGrade = new QPushButton(widget);
        pushButton_addGrade->setObjectName(QStringLiteral("pushButton_addGrade"));

        verticalLayout->addWidget(pushButton_addGrade);


        retranslateUi(AdminScreen);

        QMetaObject::connectSlotsByName(AdminScreen);
    } // setupUi

    void retranslateUi(QWidget *AdminScreen)
    {
        AdminScreen->setWindowTitle(QApplication::translate("AdminScreen", "Form", Q_NULLPTR));
        pushButton_infoShow->setText(QApplication::translate("AdminScreen", "\345\255\246\347\224\237\344\277\241\346\201\257\345\261\225\347\244\272", Q_NULLPTR));
        pushButton_addInfo->setText(QApplication::translate("AdminScreen", "\346\267\273\345\212\240\345\255\246\347\224\237", Q_NULLPTR));
        pushButton_gradeShow->setText(QApplication::translate("AdminScreen", "\346\210\220\347\273\251\345\261\225\347\244\272", Q_NULLPTR));
        pushButton_modiAdPass->setText(QApplication::translate("AdminScreen", "\344\277\256\346\224\271\347\256\241\347\220\206\345\221\230\345\257\206\347\240\201", Q_NULLPTR));
        pushButton_modyInfo->setText(QApplication::translate("AdminScreen", "\344\277\256\346\224\271\345\255\246\347\224\237\344\277\241\346\201\257", Q_NULLPTR));
        pushButton_modiStuP->setText(QApplication::translate("AdminScreen", "\344\277\256\346\224\271\345\255\246\347\224\237\345\257\206\347\240\201", Q_NULLPTR));
        pushButton_addGrade->setText(QApplication::translate("AdminScreen", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminScreen: public Ui_AdminScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSCREEN_H

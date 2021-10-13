/********************************************************************************
** Form generated from reading UI file 'denglu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DENGLU_H
#define UI_DENGLU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_denglu
{
public:
    QGridLayout *vLayout;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *denglu)
    {
        if (denglu->objectName().isEmpty())
            denglu->setObjectName(QString::fromUtf8("denglu"));
        denglu->setEnabled(false);
        denglu->resize(300, 700);
        denglu->setMaximumSize(QSize(300, 700));
        vLayout = new QGridLayout(denglu);
        vLayout->setObjectName(QString::fromUtf8("vLayout"));
        toolBox = new QToolBox(denglu);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(13);
        toolBox->setFont(font);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 282, 651));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        toolBox->addItem(page, QString::fromUtf8("\347\276\244\346\210\220\345\221\230"));

        vLayout->addWidget(toolBox, 0, 0, 1, 1);


        retranslateUi(denglu);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(denglu);
    } // setupUi

    void retranslateUi(QWidget *denglu)
    {
        denglu->setWindowTitle(QApplication::translate("denglu", "Form", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("denglu", "\347\276\244\346\210\220\345\221\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class denglu: public Ui_denglu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DENGLU_H

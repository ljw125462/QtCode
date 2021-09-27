/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *pageSet;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonStart;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonEnd;
    QSpacerItem *horizontalSpacer_2;
    QWidget *pageGame;
    QGridLayout *gridLayout_2;
    QProgressBar *progressBar;
    QTextEdit *textEdit;
    QPushButton *pushButton0;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QPushButton *pushButton4;
    QPushButton *pushButtonDel;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButton9;
    QPushButton *pushButtonEnter;
    QWidget *pageOver;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelOver;
    QWidget *pageWin;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelWin;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(567, 363);
        gridLayout = new QGridLayout(MyWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(MyWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        pageSet = new QWidget();
        pageSet->setObjectName(QStringLiteral("pageSet"));
        gridLayout_3 = new QGridLayout(pageSet);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label = new QLabel(pageSet);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(36);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(146, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(145, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        widget = new QWidget(pageSet);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_6 = new QSpacerItem(170, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        comboBox = new QComboBox(widget_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout->addWidget(comboBox);


        horizontalLayout->addWidget(widget_2);

        horizontalSpacer_7 = new QSpacerItem(170, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);


        gridLayout_3->addWidget(widget, 2, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer, 3, 1, 1, 1);

        widget_3 = new QWidget(pageSet);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(70, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonStart = new QPushButton(widget_3);
        pushButtonStart->setObjectName(QStringLiteral("pushButtonStart"));

        horizontalLayout_2->addWidget(pushButtonStart);

        horizontalSpacer_3 = new QSpacerItem(225, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButtonEnd = new QPushButton(widget_3);
        pushButtonEnd->setObjectName(QStringLiteral("pushButtonEnd"));

        horizontalLayout_2->addWidget(pushButtonEnd);

        horizontalSpacer_2 = new QSpacerItem(67, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_3->addWidget(widget_3, 4, 0, 1, 3);

        stackedWidget->addWidget(pageSet);
        pageGame = new QWidget();
        pageGame->setObjectName(QStringLiteral("pageGame"));
        gridLayout_2 = new QGridLayout(pageGame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        progressBar = new QProgressBar(pageGame);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(100);

        gridLayout_2->addWidget(progressBar, 0, 0, 1, 6);

        textEdit = new QTextEdit(pageGame);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(48);
        textEdit->setFont(font1);
        textEdit->setReadOnly(true);

        gridLayout_2->addWidget(textEdit, 1, 0, 1, 6);

        pushButton0 = new QPushButton(pageGame);
        pushButton0->setObjectName(QStringLiteral("pushButton0"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton0->sizePolicy().hasHeightForWidth());
        pushButton0->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(20);
        pushButton0->setFont(font2);

        gridLayout_2->addWidget(pushButton0, 2, 0, 1, 1);

        pushButton1 = new QPushButton(pageGame);
        pushButton1->setObjectName(QStringLiteral("pushButton1"));
        sizePolicy1.setHeightForWidth(pushButton1->sizePolicy().hasHeightForWidth());
        pushButton1->setSizePolicy(sizePolicy1);
        pushButton1->setFont(font2);

        gridLayout_2->addWidget(pushButton1, 2, 1, 1, 1);

        pushButton2 = new QPushButton(pageGame);
        pushButton2->setObjectName(QStringLiteral("pushButton2"));
        sizePolicy1.setHeightForWidth(pushButton2->sizePolicy().hasHeightForWidth());
        pushButton2->setSizePolicy(sizePolicy1);
        pushButton2->setFont(font2);

        gridLayout_2->addWidget(pushButton2, 2, 2, 1, 1);

        pushButton3 = new QPushButton(pageGame);
        pushButton3->setObjectName(QStringLiteral("pushButton3"));
        sizePolicy1.setHeightForWidth(pushButton3->sizePolicy().hasHeightForWidth());
        pushButton3->setSizePolicy(sizePolicy1);
        pushButton3->setFont(font2);

        gridLayout_2->addWidget(pushButton3, 2, 3, 1, 1);

        pushButton4 = new QPushButton(pageGame);
        pushButton4->setObjectName(QStringLiteral("pushButton4"));
        sizePolicy1.setHeightForWidth(pushButton4->sizePolicy().hasHeightForWidth());
        pushButton4->setSizePolicy(sizePolicy1);
        pushButton4->setFont(font2);

        gridLayout_2->addWidget(pushButton4, 2, 4, 1, 1);

        pushButtonDel = new QPushButton(pageGame);
        pushButtonDel->setObjectName(QStringLiteral("pushButtonDel"));
        sizePolicy1.setHeightForWidth(pushButtonDel->sizePolicy().hasHeightForWidth());
        pushButtonDel->setSizePolicy(sizePolicy1);
        pushButtonDel->setFont(font2);

        gridLayout_2->addWidget(pushButtonDel, 2, 5, 1, 1);

        pushButton5 = new QPushButton(pageGame);
        pushButton5->setObjectName(QStringLiteral("pushButton5"));
        sizePolicy1.setHeightForWidth(pushButton5->sizePolicy().hasHeightForWidth());
        pushButton5->setSizePolicy(sizePolicy1);
        pushButton5->setFont(font2);

        gridLayout_2->addWidget(pushButton5, 3, 0, 1, 1);

        pushButton6 = new QPushButton(pageGame);
        pushButton6->setObjectName(QStringLiteral("pushButton6"));
        sizePolicy1.setHeightForWidth(pushButton6->sizePolicy().hasHeightForWidth());
        pushButton6->setSizePolicy(sizePolicy1);
        pushButton6->setFont(font2);

        gridLayout_2->addWidget(pushButton6, 3, 1, 1, 1);

        pushButton7 = new QPushButton(pageGame);
        pushButton7->setObjectName(QStringLiteral("pushButton7"));
        sizePolicy1.setHeightForWidth(pushButton7->sizePolicy().hasHeightForWidth());
        pushButton7->setSizePolicy(sizePolicy1);
        pushButton7->setFont(font2);

        gridLayout_2->addWidget(pushButton7, 3, 2, 1, 1);

        pushButton8 = new QPushButton(pageGame);
        pushButton8->setObjectName(QStringLiteral("pushButton8"));
        sizePolicy1.setHeightForWidth(pushButton8->sizePolicy().hasHeightForWidth());
        pushButton8->setSizePolicy(sizePolicy1);
        pushButton8->setFont(font2);

        gridLayout_2->addWidget(pushButton8, 3, 3, 1, 1);

        pushButton9 = new QPushButton(pageGame);
        pushButton9->setObjectName(QStringLiteral("pushButton9"));
        sizePolicy1.setHeightForWidth(pushButton9->sizePolicy().hasHeightForWidth());
        pushButton9->setSizePolicy(sizePolicy1);
        pushButton9->setFont(font2);

        gridLayout_2->addWidget(pushButton9, 3, 4, 1, 1);

        pushButtonEnter = new QPushButton(pageGame);
        pushButtonEnter->setObjectName(QStringLiteral("pushButtonEnter"));
        sizePolicy1.setHeightForWidth(pushButtonEnter->sizePolicy().hasHeightForWidth());
        pushButtonEnter->setSizePolicy(sizePolicy1);
        pushButtonEnter->setFont(font2);

        gridLayout_2->addWidget(pushButtonEnter, 3, 5, 1, 1);

        stackedWidget->addWidget(pageGame);
        pageOver = new QWidget();
        pageOver->setObjectName(QStringLiteral("pageOver"));
        horizontalLayout_3 = new QHBoxLayout(pageOver);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelOver = new QLabel(pageOver);
        labelOver->setObjectName(QStringLiteral("labelOver"));

        horizontalLayout_3->addWidget(labelOver);

        stackedWidget->addWidget(pageOver);
        pageWin = new QWidget();
        pageWin->setObjectName(QStringLiteral("pageWin"));
        verticalLayout_2 = new QVBoxLayout(pageWin);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelWin = new QLabel(pageWin);
        labelWin->setObjectName(QStringLiteral("labelWin"));

        verticalLayout_2->addWidget(labelWin);

        stackedWidget->addWidget(pageWin);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(MyWidget);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "\347\214\234\346\225\260\345\255\227\346\270\270\346\210\217", 0));
        label->setText(QApplication::translate("MyWidget", "\347\214\234\346\225\260\345\255\227\346\270\270\346\210\217", 0));
        label_2->setText(QApplication::translate("MyWidget", "\350\257\267\350\256\276\347\275\256\347\214\234\346\225\260\345\255\227\346\227\266\351\227\264(\347\247\222)", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MyWidget", "20", 0)
         << QApplication::translate("MyWidget", "40", 0)
         << QApplication::translate("MyWidget", "60", 0)
         << QApplication::translate("MyWidget", "80", 0)
         << QApplication::translate("MyWidget", "100", 0)
         << QApplication::translate("MyWidget", "150", 0)
         << QApplication::translate("MyWidget", "200", 0)
         << QApplication::translate("MyWidget", "300", 0)
         << QApplication::translate("MyWidget", "400", 0)
         << QApplication::translate("MyWidget", "500", 0)
        );
        pushButtonStart->setText(QApplication::translate("MyWidget", "\350\277\233\345\205\245\346\270\270\346\210\217", 0));
        pushButtonEnd->setText(QApplication::translate("MyWidget", "\351\200\200\345\207\272\346\270\270\346\210\217", 0));
        pushButton0->setText(QApplication::translate("MyWidget", "0", 0));
        pushButton1->setText(QApplication::translate("MyWidget", "1", 0));
        pushButton2->setText(QApplication::translate("MyWidget", "2", 0));
        pushButton3->setText(QApplication::translate("MyWidget", "3", 0));
        pushButton4->setText(QApplication::translate("MyWidget", "4", 0));
        pushButtonDel->setText(QApplication::translate("MyWidget", "<\342\200\224\342\200\224", 0));
        pushButton5->setText(QApplication::translate("MyWidget", "5", 0));
        pushButton6->setText(QApplication::translate("MyWidget", "6", 0));
        pushButton7->setText(QApplication::translate("MyWidget", "7", 0));
        pushButton8->setText(QApplication::translate("MyWidget", "8", 0));
        pushButton9->setText(QApplication::translate("MyWidget", "9", 0));
        pushButtonEnter->setText(QApplication::translate("MyWidget", "\346\217\220\347\244\272", 0));
        labelOver->setText(QApplication::translate("MyWidget", "TextLabel", 0));
        labelWin->setText(QApplication::translate("MyWidget", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H

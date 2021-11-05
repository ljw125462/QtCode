/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *horizontalSpacer_18;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *location;
    QSpacerItem *horizontalSpacer_19;
    QSpacerItem *horizontalSpacer_20;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_22;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_21;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_17;
    QLabel *label_5;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *horizontalSpacer_3;
    QLabel *weather1;
    QSpacerItem *horizontalSpacer_6;
    QLabel *weather2;
    QSpacerItem *horizontalSpacer_11;
    QLabel *weather3;
    QSpacerItem *horizontalSpacer_15;
    QLabel *temperature1;
    QLabel *label_9;
    QLabel *temperature2;
    QLabel *label_12;
    QLabel *temperature3;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_16;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1024, 600);
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_18);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 80));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/image/location6.png);"));

        horizontalLayout->addWidget(label);

        location = new QLabel(Widget);
        location->setObjectName(QString::fromUtf8("location"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(27);
        font.setBold(true);
        font.setWeight(75);
        location->setFont(font);
        location->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(location);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_19);


        horizontalLayout_4->addLayout(verticalLayout_3);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_20);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(61);
        label_2->setFont(font1);

        horizontalLayout_3->addWidget(label_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setPointSize(31);
        label_3->setFont(font2);

        verticalLayout_2->addWidget(label_3);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_22);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_21);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font3;
        font3.setPointSize(18);
        label_4->setFont(font3);

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_17 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_17);


        verticalLayout->addLayout(horizontalLayout_2);

        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font4;
        font4.setPointSize(13);
        label_5->setFont(font4);

        verticalLayout->addWidget(label_5);


        horizontalLayout_4->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        label_6 = new QLabel(Widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font5;
        font5.setPointSize(22);
        label_6->setFont(font5);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 0, 1, 1, 4);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 0, 5, 1, 1);

        label_10 = new QLabel(Widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font5);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 0, 6, 1, 3);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 0, 9, 1, 1);

        label_14 = new QLabel(Widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font5);
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_14, 0, 10, 1, 5);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_13, 0, 15, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 2);

        label_7 = new QLabel(Widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(150, 150));
        label_7->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_7, 1, 2, 1, 3);

        horizontalSpacer_7 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 1, 5, 1, 1);

        label_13 = new QLabel(Widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(150, 150));
        label_13->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_13, 1, 6, 1, 3);

        horizontalSpacer_10 = new QSpacerItem(148, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 1, 9, 1, 2);

        label_17 = new QLabel(Widget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(150, 150));
        label_17->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_17, 1, 11, 1, 4);

        horizontalSpacer_14 = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_14, 1, 15, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 0, 1, 3);

        weather1 = new QLabel(Widget);
        weather1->setObjectName(QString::fromUtf8("weather1"));
        weather1->setFont(font5);

        gridLayout->addWidget(weather1, 2, 3, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 2, 4, 1, 3);

        weather2 = new QLabel(Widget);
        weather2->setObjectName(QString::fromUtf8("weather2"));
        weather2->setFont(font5);

        gridLayout->addWidget(weather2, 2, 7, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(228, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_11, 2, 8, 1, 4);

        weather3 = new QLabel(Widget);
        weather3->setObjectName(QString::fromUtf8("weather3"));
        weather3->setFont(font5);

        gridLayout->addWidget(weather3, 2, 12, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_15, 2, 13, 1, 3);

        temperature1 = new QLabel(Widget);
        temperature1->setObjectName(QString::fromUtf8("temperature1"));
        QFont font6;
        font6.setPointSize(24);
        temperature1->setFont(font6);
        temperature1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(temperature1, 3, 2, 2, 2);

        label_9 = new QLabel(Widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font6);

        gridLayout->addWidget(label_9, 3, 4, 2, 1);

        temperature2 = new QLabel(Widget);
        temperature2->setObjectName(QString::fromUtf8("temperature2"));
        temperature2->setFont(font6);
        temperature2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(temperature2, 3, 6, 2, 2);

        label_12 = new QLabel(Widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font6);

        gridLayout->addWidget(label_12, 3, 8, 2, 1);

        temperature3 = new QLabel(Widget);
        temperature3->setObjectName(QString::fromUtf8("temperature3"));
        temperature3->setFont(font6);
        temperature3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(temperature3, 3, 11, 2, 2);

        label_16 = new QLabel(Widget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font6);

        gridLayout->addWidget(label_16, 3, 13, 2, 2);

        horizontalSpacer_4 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 4, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 4, 5, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_12, 4, 9, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_16, 4, 14, 1, 2);


        verticalLayout_4->addLayout(gridLayout);

        verticalLayout_4->setStretch(0, 2);
        verticalLayout_4->setStretch(1, 8);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QString());
        location->setText(QApplication::translate("Widget", "\345\256\201\346\263\242\345\270\202", nullptr));
        label_2->setText(QApplication::translate("Widget", "19", nullptr));
        label_3->setText(QApplication::translate("Widget", "\342\204\203", nullptr));
        label_4->setText(QApplication::translate("Widget", "\346\270\251\351\246\250\346\217\220\347\244\272\357\274\232", nullptr));
        label_5->setText(QApplication::translate("Widget", "\346\204\237\345\206\222\346\230\223\345\217\221\346\227\266\346\234\237\357\274\214\346\263\250\346\204\217\347\251\277\345\245\275\350\241\243\347\211\251\357\274\214\345\244\232\345\226\235\346\260\264", nullptr));
        label_6->setText(QApplication::translate("Widget", "Yesterday", nullptr));
        label_10->setText(QApplication::translate("Widget", "Today", nullptr));
        label_14->setText(QApplication::translate("Widget", "Tommorrow", nullptr));
        label_7->setText(QString());
        label_13->setText(QString());
        label_17->setText(QString());
        weather1->setText(QApplication::translate("Widget", "\346\231\264", nullptr));
        weather2->setText(QApplication::translate("Widget", "\346\231\264", nullptr));
        weather3->setText(QApplication::translate("Widget", "\346\231\264", nullptr));
        temperature1->setText(QApplication::translate("Widget", "14/20", nullptr));
        label_9->setText(QApplication::translate("Widget", "\342\204\203", nullptr));
        temperature2->setText(QApplication::translate("Widget", "14/20", nullptr));
        label_12->setText(QApplication::translate("Widget", "\342\204\203", nullptr));
        temperature3->setText(QApplication::translate("Widget", "14/20", nullptr));
        label_16->setText(QApplication::translate("Widget", "\342\204\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

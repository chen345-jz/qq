/********************************************************************************
** Form generated from reading UI file 'DeveloperPage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVELOPERPAGE_H
#define UI_DEVELOPERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeveloperPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_destroyDB;
    QPushButton *pushButton_resetDB;
    QPushButton *pushButton_pillarDiagram;
    QPushButton *pushButton_pieChart;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *DeveloperPage)
    {
        if (DeveloperPage->objectName().isEmpty())
            DeveloperPage->setObjectName(QString::fromUtf8("DeveloperPage"));
        DeveloperPage->resize(440, 495);
        verticalLayout_2 = new QVBoxLayout(DeveloperPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(DeveloperPage);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(151, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(150, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        widget_3 = new QWidget(DeveloperPage);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(131, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_destroyDB = new QPushButton(widget_2);
        pushButton_destroyDB->setObjectName(QString::fromUtf8("pushButton_destroyDB"));

        verticalLayout->addWidget(pushButton_destroyDB);

        pushButton_resetDB = new QPushButton(widget_2);
        pushButton_resetDB->setObjectName(QString::fromUtf8("pushButton_resetDB"));

        verticalLayout->addWidget(pushButton_resetDB);

        pushButton_pillarDiagram = new QPushButton(widget_2);
        pushButton_pillarDiagram->setObjectName(QString::fromUtf8("pushButton_pillarDiagram"));

        verticalLayout->addWidget(pushButton_pillarDiagram);

        pushButton_pieChart = new QPushButton(widget_2);
        pushButton_pieChart->setObjectName(QString::fromUtf8("pushButton_pieChart"));

        verticalLayout->addWidget(pushButton_pieChart);


        horizontalLayout_2->addWidget(widget_2);

        horizontalSpacer_4 = new QSpacerItem(130, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addWidget(widget_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        retranslateUi(DeveloperPage);

        QMetaObject::connectSlotsByName(DeveloperPage);
    } // setupUi

    void retranslateUi(QWidget *DeveloperPage)
    {
        DeveloperPage->setWindowTitle(QCoreApplication::translate("DeveloperPage", "DeveloperPage", nullptr));
        label->setText(QCoreApplication::translate("DeveloperPage", "\345\274\200\345\217\221\350\200\205\347\225\214\351\235\242", nullptr));
        pushButton_destroyDB->setText(QCoreApplication::translate("DeveloperPage", "\345\210\240\351\231\244\346\225\260\346\215\256\345\272\223", nullptr));
        pushButton_resetDB->setText(QCoreApplication::translate("DeveloperPage", "\351\207\215\347\275\256\346\225\260\346\215\256\345\272\223", nullptr));
        pushButton_pillarDiagram->setText(QCoreApplication::translate("DeveloperPage", "\346\237\261\345\233\276", nullptr));
        pushButton_pieChart->setText(QCoreApplication::translate("DeveloperPage", "\351\245\274\345\233\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeveloperPage: public Ui_DeveloperPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVELOPERPAGE_H

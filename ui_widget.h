/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *spinBox;
    QSlider *horizontalSlider;
    QVBoxLayout *verticalLayout;
    QLCDNumber *lcdNumber;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(180, 200, 341, 191));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        spinBox = new QSpinBox(widget);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimum(-100);
        spinBox->setMaximum(100);

        horizontalLayout_2->addWidget(spinBox);

        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setMinimum(-100);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lcdNumber = new QLCDNumber(widget);
        lcdNumber->setObjectName("lcdNumber");

        verticalLayout->addWidget(lcdNumber);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Widget);
        QObject::connect(spinBox, &QSpinBox::valueChanged, horizontalSlider, &QSlider::setValue);
        QObject::connect(horizontalSlider, &QSlider::valueChanged, spinBox, &QSpinBox::setValue);
        QObject::connect(spinBox, &QSpinBox::valueChanged, lcdNumber, qOverload<int>(&QLCDNumber::display));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSlider *brightnessSlider;
    QSlider *contrastSlider;
    QSlider *hueSlider;
    QSlider *saturationSlider;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(600, 400);
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 320, 54, 12));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 320, 54, 12));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 360, 54, 12));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(310, 360, 54, 12));
        brightnessSlider = new QSlider(Widget);
        brightnessSlider->setObjectName(QStringLiteral("brightnessSlider"));
        brightnessSlider->setGeometry(QRect(120, 320, 160, 19));
        brightnessSlider->setMinimum(-100);
        brightnessSlider->setMaximum(100);
        brightnessSlider->setOrientation(Qt::Horizontal);
        brightnessSlider->setInvertedAppearance(false);
        brightnessSlider->setInvertedControls(false);
        brightnessSlider->setTickPosition(QSlider::TicksBelow);
        contrastSlider = new QSlider(Widget);
        contrastSlider->setObjectName(QStringLiteral("contrastSlider"));
        contrastSlider->setGeometry(QRect(380, 320, 160, 19));
        contrastSlider->setMinimum(-100);
        contrastSlider->setMaximum(100);
        contrastSlider->setOrientation(Qt::Horizontal);
        hueSlider = new QSlider(Widget);
        hueSlider->setObjectName(QStringLiteral("hueSlider"));
        hueSlider->setGeometry(QRect(120, 360, 160, 19));
        hueSlider->setMinimum(-100);
        hueSlider->setMaximum(100);
        hueSlider->setOrientation(Qt::Horizontal);
        saturationSlider = new QSlider(Widget);
        saturationSlider->setObjectName(QStringLiteral("saturationSlider"));
        saturationSlider->setGeometry(QRect(380, 360, 160, 19));
        saturationSlider->setMinimum(-100);
        saturationSlider->setMaximum(100);
        saturationSlider->setOrientation(Qt::Horizontal);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\344\272\256\345\272\246", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\345\257\271\346\257\224\345\272\246", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\350\211\262\347\233\270", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "\351\245\261\345\222\214\345\272\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

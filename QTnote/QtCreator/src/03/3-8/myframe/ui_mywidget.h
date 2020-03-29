/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QFrame *frame;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_2;
    QWidget *page_2;
    QLabel *label_3;
    QToolBox *toolBox;
    QWidget *page_3;
    QWidget *page_5;
    QWidget *page_4;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(400, 300);
        frame = new QFrame(MyWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(20, 20, 120, 80));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(MyWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 10, 191, 91));
        label->setScaledContents(true);
        label->setWordWrap(false);
        lcdNumber = new QLCDNumber(MyWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(20, 130, 121, 41));
        lcdNumber->setSmallDecimalPoint(true);
        lcdNumber->setDigitCount(7);
        lcdNumber->setProperty("value", QVariant(456.123));
        listWidget = new QListWidget(MyWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(150, 100, 81, 101));
        stackedWidget = new QStackedWidget(MyWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(240, 100, 141, 101));
        stackedWidget->setFrameShape(QFrame::StyledPanel);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 50, 54, 12));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 50, 54, 12));
        stackedWidget->addWidget(page_2);
        toolBox = new QToolBox(MyWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(30, 180, 69, 101));
        toolBox->setFrameShape(QFrame::Box);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 67, 21));
        toolBox->addItem(page_3, QString::fromUtf8("\345\245\275\345\217\213"));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        toolBox->addItem(page_5, QString::fromUtf8("\351\273\221\345\220\215\345\215\225"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 67, 21));
        toolBox->addItem(page_4, QString::fromUtf8("\351\231\214\347\224\237\344\272\272"));

        retranslateUi(MyWidget);
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        stackedWidget->setCurrentIndex(1);
        toolBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "MyWidget", Q_NULLPTR));
        label->setText(QApplication::translate("MyWidget", "TextLabel", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MyWidget", "\347\254\254\344\270\200\351\241\265", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MyWidget", "\347\254\254\344\272\214\351\241\265", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_2->setText(QApplication::translate("MyWidget", "\347\254\254\344\270\200\351\241\265", Q_NULLPTR));
        label_3->setText(QApplication::translate("MyWidget", "\347\254\254\344\272\214\351\241\265", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("MyWidget", "\345\245\275\345\217\213", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_5), QApplication::translate("MyWidget", "\351\273\221\345\220\215\345\215\225", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("MyWidget", "\351\231\214\347\224\237\344\272\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H

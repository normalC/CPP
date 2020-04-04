/********************************************************************************
** Form generated from reading UI file 'frmntpclient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMNTPCLIENT_H
#define UI_FRMNTPCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmNtpClient
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *labNtpIP;
    QLineEdit *txtNtpIP;
    QPushButton *btnGetTime;
    QLabel *labTime;
    QLineEdit *txtTime;

    void setupUi(QWidget *frmNtpClient)
    {
        if (frmNtpClient->objectName().isEmpty())
            frmNtpClient->setObjectName(QStringLiteral("frmNtpClient"));
        frmNtpClient->resize(400, 300);
        widget = new QWidget(frmNtpClient);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 321, 48));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labNtpIP = new QLabel(widget);
        labNtpIP->setObjectName(QStringLiteral("labNtpIP"));

        gridLayout->addWidget(labNtpIP, 0, 0, 1, 1);

        txtNtpIP = new QLineEdit(widget);
        txtNtpIP->setObjectName(QStringLiteral("txtNtpIP"));

        gridLayout->addWidget(txtNtpIP, 0, 1, 1, 1);

        btnGetTime = new QPushButton(widget);
        btnGetTime->setObjectName(QStringLiteral("btnGetTime"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnGetTime->sizePolicy().hasHeightForWidth());
        btnGetTime->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnGetTime, 0, 2, 2, 1);

        labTime = new QLabel(widget);
        labTime->setObjectName(QStringLiteral("labTime"));

        gridLayout->addWidget(labTime, 1, 0, 1, 1);

        txtTime = new QLineEdit(widget);
        txtTime->setObjectName(QStringLiteral("txtTime"));

        gridLayout->addWidget(txtTime, 1, 1, 1, 1);


        retranslateUi(frmNtpClient);

        QMetaObject::connectSlotsByName(frmNtpClient);
    } // setupUi

    void retranslateUi(QWidget *frmNtpClient)
    {
        frmNtpClient->setWindowTitle(QApplication::translate("frmNtpClient", "Form", Q_NULLPTR));
        labNtpIP->setText(QApplication::translate("frmNtpClient", "NTP\346\234\215\345\212\241\345\231\250", Q_NULLPTR));
        txtNtpIP->setText(QApplication::translate("frmNtpClient", "133.100.11.8", Q_NULLPTR));
        btnGetTime->setText(QApplication::translate("frmNtpClient", "\350\216\267\345\217\226\346\227\266\351\227\264", Q_NULLPTR));
        labTime->setText(QApplication::translate("frmNtpClient", "\350\277\224\345\233\236\346\227\266\351\227\264", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class frmNtpClient: public Ui_frmNtpClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMNTPCLIENT_H

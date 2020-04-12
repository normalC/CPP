/********************************************************************************
** Form generated from reading UI file 'localhostname.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCALHOSTNAME_H
#define UI_LOCALHOSTNAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LocalHostName
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LocalHostName)
    {
        if (LocalHostName->objectName().isEmpty())
            LocalHostName->setObjectName(QStringLiteral("LocalHostName"));
        LocalHostName->resize(400, 300);
        menuBar = new QMenuBar(LocalHostName);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        LocalHostName->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LocalHostName);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        LocalHostName->addToolBar(mainToolBar);
        centralWidget = new QWidget(LocalHostName);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        LocalHostName->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(LocalHostName);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LocalHostName->setStatusBar(statusBar);

        retranslateUi(LocalHostName);

        QMetaObject::connectSlotsByName(LocalHostName);
    } // setupUi

    void retranslateUi(QMainWindow *LocalHostName)
    {
        LocalHostName->setWindowTitle(QApplication::translate("LocalHostName", "LocalHostName", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LocalHostName: public Ui_LocalHostName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCALHOSTNAME_H

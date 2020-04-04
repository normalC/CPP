/********************************************************************************
** Form generated from reading UI file 'frmdbpage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMDBPAGE_H
#define UI_FRMDBPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmDbPage
{
public:
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QTableView *tableMain;
    QFrame *frameBottom;
    QVBoxLayout *verticalLayout;
    QPushButton *btnSelect;
    QPushButton *btnPre;
    QPushButton *btnNext;
    QPushButton *btnFirst;
    QPushButton *btnLast;
    QLabel *labPageCount;
    QLabel *labResultCount;
    QLabel *labPageCurrent;
    QLabel *labResultCurrent;
    QLabel *labResult;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *frmDbPage)
    {
        if (frmDbPage->objectName().isEmpty())
            frmDbPage->setObjectName(QStringLiteral("frmDbPage"));
        frmDbPage->resize(800, 600);
        horizontalLayout = new QHBoxLayout(frmDbPage);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 6, 6, 6);
        splitter = new QSplitter(frmDbPage);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setOpaqueResize(false);
        tableMain = new QTableView(splitter);
        tableMain->setObjectName(QStringLiteral("tableMain"));
        tableMain->setStyleSheet(QStringLiteral(""));
        splitter->addWidget(tableMain);

        horizontalLayout->addWidget(splitter);

        frameBottom = new QFrame(frmDbPage);
        frameBottom->setObjectName(QStringLiteral("frameBottom"));
        frameBottom->setMinimumSize(QSize(190, 0));
        frameBottom->setMaximumSize(QSize(190, 16777215));
        frameBottom->setFrameShape(QFrame::Box);
        frameBottom->setFrameShadow(QFrame::Sunken);
        verticalLayout = new QVBoxLayout(frameBottom);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        btnSelect = new QPushButton(frameBottom);
        btnSelect->setObjectName(QStringLiteral("btnSelect"));
        btnSelect->setMinimumSize(QSize(80, 0));

        verticalLayout->addWidget(btnSelect);

        btnPre = new QPushButton(frameBottom);
        btnPre->setObjectName(QStringLiteral("btnPre"));
        btnPre->setMinimumSize(QSize(50, 0));
        btnPre->setIconSize(QSize(18, 18));

        verticalLayout->addWidget(btnPre);

        btnNext = new QPushButton(frameBottom);
        btnNext->setObjectName(QStringLiteral("btnNext"));
        btnNext->setMinimumSize(QSize(50, 0));
        btnNext->setIconSize(QSize(18, 18));

        verticalLayout->addWidget(btnNext);

        btnFirst = new QPushButton(frameBottom);
        btnFirst->setObjectName(QStringLiteral("btnFirst"));
        btnFirst->setMinimumSize(QSize(50, 0));
        btnFirst->setIconSize(QSize(18, 18));

        verticalLayout->addWidget(btnFirst);

        btnLast = new QPushButton(frameBottom);
        btnLast->setObjectName(QStringLiteral("btnLast"));
        btnLast->setMinimumSize(QSize(50, 0));
        btnLast->setIconSize(QSize(18, 18));

        verticalLayout->addWidget(btnLast);

        labPageCount = new QLabel(frameBottom);
        labPageCount->setObjectName(QStringLiteral("labPageCount"));
        labPageCount->setMinimumSize(QSize(0, 25));
        labPageCount->setFrameShape(QFrame::Box);
        labPageCount->setFrameShadow(QFrame::Sunken);
        labPageCount->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labPageCount);

        labResultCount = new QLabel(frameBottom);
        labResultCount->setObjectName(QStringLiteral("labResultCount"));
        labResultCount->setMinimumSize(QSize(0, 25));
        labResultCount->setFrameShape(QFrame::Box);
        labResultCount->setFrameShadow(QFrame::Sunken);
        labResultCount->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labResultCount);

        labPageCurrent = new QLabel(frameBottom);
        labPageCurrent->setObjectName(QStringLiteral("labPageCurrent"));
        labPageCurrent->setMinimumSize(QSize(0, 25));
        labPageCurrent->setFrameShape(QFrame::Box);
        labPageCurrent->setFrameShadow(QFrame::Sunken);
        labPageCurrent->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labPageCurrent);

        labResultCurrent = new QLabel(frameBottom);
        labResultCurrent->setObjectName(QStringLiteral("labResultCurrent"));
        labResultCurrent->setMinimumSize(QSize(0, 25));
        labResultCurrent->setFrameShape(QFrame::Box);
        labResultCurrent->setFrameShadow(QFrame::Sunken);
        labResultCurrent->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labResultCurrent);

        labResult = new QLabel(frameBottom);
        labResult->setObjectName(QStringLiteral("labResult"));
        labResult->setMinimumSize(QSize(0, 25));
        labResult->setFrameShape(QFrame::Box);
        labResult->setFrameShadow(QFrame::Sunken);
        labResult->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labResult);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(frameBottom);


        retranslateUi(frmDbPage);

        QMetaObject::connectSlotsByName(frmDbPage);
    } // setupUi

    void retranslateUi(QWidget *frmDbPage)
    {
        frmDbPage->setWindowTitle(QApplication::translate("frmDbPage", "Form", Q_NULLPTR));
        btnSelect->setText(QApplication::translate("frmDbPage", "\346\237\245\350\257\242", Q_NULLPTR));
        btnPre->setText(QApplication::translate("frmDbPage", "\344\270\212\344\270\200\351\241\265", Q_NULLPTR));
        btnNext->setText(QApplication::translate("frmDbPage", "\344\270\213\344\270\200\351\241\265", Q_NULLPTR));
        btnFirst->setText(QApplication::translate("frmDbPage", "\347\254\254\344\270\200\351\241\265", Q_NULLPTR));
        btnLast->setText(QApplication::translate("frmDbPage", "\346\234\253\344\270\200\351\241\265", Q_NULLPTR));
        labPageCount->setText(QString());
        labResultCount->setText(QString());
        labPageCurrent->setText(QString());
        labResultCurrent->setText(QString());
        labResult->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class frmDbPage: public Ui_frmDbPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMDBPAGE_H

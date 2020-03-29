#include "mywidget.h"
#include "ui_mywidget.h"

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    // 设置时间为现在的系统时间
    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());

    ui->dateTimeEdit->setDisplayFormat(tr("yyyy  yyyy MM dd ddd HH mm ss "));

}

MyWidget::~MyWidget()
{
    delete ui;
}

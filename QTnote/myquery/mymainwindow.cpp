#include "mymainwindow.h"
#include "ui_mymainwindow.h"
#include <QSqlQuery>
#include <QDebug>

MyMainWindow::MyMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyMainWindow)
{
    ui->setupUi(this);
}

MyMainWindow::~MyMainWindow()
{
    delete ui;
}

void MyMainWindow::on_pushButton_clicked()
{
    QSqlQuery query;
    query.exec("select * from student");
    while(query.next())
    {
        qDebug() << query.value(0).toInt()
                       << query.value(1).toString();
    }
}

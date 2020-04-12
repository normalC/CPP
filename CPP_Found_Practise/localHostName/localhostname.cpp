#include "localhostname.h"
#include "ui_localhostname.h"

LocalHostName::LocalHostName(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LocalHostName)
{
    ui->setupUi(this);
}

LocalHostName::~LocalHostName()
{
    delete ui;
}

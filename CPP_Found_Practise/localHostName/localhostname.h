#ifndef LOCALHOSTNAME_H
#define LOCALHOSTNAME_H

#include <QMainWindow>

namespace Ui {
class LocalHostName;
}

class LocalHostName : public QMainWindow
{
    Q_OBJECT

public:
    explicit LocalHostName(QWidget *parent = 0);
    ~LocalHostName();

private:
    Ui::LocalHostName *ui;
};

#endif // LOCALHOSTNAME_H

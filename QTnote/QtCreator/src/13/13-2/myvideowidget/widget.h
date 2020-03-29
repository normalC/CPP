#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFileDialog>
#include <QString>
class QMediaPlayer;
class QVideoWidget;


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();




private:
    Ui::Widget *ui;

    QMediaPlayer *player;
    QVideoWidget *videoWidget;
    QString filename;

};

#endif // WIDGET_H

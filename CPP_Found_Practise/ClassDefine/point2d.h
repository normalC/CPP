#ifndef POINT2D_H
#define POINT2D_H


class Point2D
{
public:
    Point2D();
    Point2D(double x,double y);
    /*（1）将类定义为抽象基类或者将构造函数声明为private；
    （2）不允许类外部创建类对象，只能在类内部创建对象。*/
public:
    void setX(double x);
    void setY(double y);
    double x() const;
    double y() const;
private:
    double xVal;
    double yVal;
};



#endif // POINT2D_H

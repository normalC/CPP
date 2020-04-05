#ifndef POINT2D_H
#define POINT2D_H

/*

 * 返回值类型 operator 运算符名称 (形参表列){
    //TODO:

    Point2D &operator+=(const Point2D &other)
二元运算符用成员重载时, 只需要一个参数, 另一个参数由this指针传入
所以, 像
Point2D::operator+(Point2D&, Point2D&)
都要改成
Point2D::operator+(Point2D&)
第一个参数由this指针自动传入到函数中去的.
两个参数可以做成友元函数。
}*/
class Point2D
{
public:
    Point2D();
    Point2D(double x,double y);
    void setX(double x);
    void setY(double y);
    double x() const;
    double y() const;
    void show();
    friend Point2D operator-(const Point2D &a,const Point2D &b);

    Point2D &operator+=(const Point2D &other)//操作符重载
        {
            xVal+=other.xVal;
            yVal+=other.yVal;
            return *this;}

     Point2D &operator-=(const Point2D &other)//操作符重载
                {
                    xVal-=other.xVal;
                    yVal-=other.yVal;
                    return *this;
                    }


private:
    double xVal;
    double yVal;
};
inline Point2D operator+(const Point2D &a,const Point2D &b)
{
return Point2D(a.x()+b.x(),a.y()+b.y());
}
inline Point2D operator-(const Point2D &a,const Point2D &b)
{
return Point2D(a.x()-b.x(),a.y()-b.y());
}



#endif // POINT2D_H

#ifndef POINT2D_H
#define POINT2D_H

/*
如果想让某个C++类具备有可复制性，那么必须确保youyi个复制构造函数
copy onstructor和一个赋值运算符。



*/

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
//    Point2D(const Point2D &other);让赋值构造函数设为私有，可以禁止可复制特性
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

#ifndef SHAPE_H
#define SHAPE_H
#include "point2d.h"


class Shape
{
public:
    Shape(Point2D center){MyCenter=center;}
    virtual void draw()=0;
protected:
    Point2D MyCenter;
};

#endif // SHAPE_H

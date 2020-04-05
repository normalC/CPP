#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"
using namespace std;


class Circle:public Shape
{
public:
    Circle(Point2D center,double radius=0.5):Shape(center)
    {myRadius=radius;}
    void draw(){
           cout<<"do something"<<endl;
           cout<<this->MyCenter.x()<<"  "<<this->MyCenter.x()<<"  "<<myRadius<<endl;
    }
private:
    double myRadius;

};

#endif // CIRCLE_H

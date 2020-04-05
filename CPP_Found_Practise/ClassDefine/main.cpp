#include <iostream>
#include "point2d.h"
#include "circle.h"
#include <typeinfo>

using namespace std;

int main()
{




    Point2D alpha;//调用构造函数
    cout<<alpha.x()<<"   "<<alpha.y()<<endl;
    Point2D beta(0.666,0.777);//调用构造函数
    cout<<beta.x()<<"   "<<beta.y()<<endl;

    Circle cir1(beta,0.9);
    cir1.draw();

    cout<<"************************************88"<<endl;
    cout << typeid(cir1).name() << endl;
    cout << typeid(alpha).name() << endl;
     Point2D  * const ptr=&alpha ;//指针常量
     //ptr=0;指针常量不能变
     const  Point2D  * ptr3=&alpha ;//常量指针
     ptr3=0;//常量指针能变,



     cout<<ptr<<endl;
    //ptr->setX(4.0);ptr->setY(5.0);
    cout<<ptr->x()<<"   "<<ptr->y()<<endl;



    cout<<"************************************88"<<endl;

    Point2D *ptr1;
    ptr1=&beta;
    cout<<ptr1<<endl;
    ptr1->setX(4.0);ptr1->setY(5.0);
    cout<<ptr1->x()<<"   "<<ptr1->y()<<endl;


    Shape *ptr2=NULL;//如果不指定NULL，可能存在安全问题，不确定性；
    ptr2=&cir1;
    cout<<ptr2<<endl;
    ptr2->draw();


    cout << typeid(int).name() << endl
         << typeid(unsigned).name() << endl
         << typeid(long).name() << endl
         << typeid(unsigned long).name() << endl
         << typeid(char).name() << endl
         << typeid(unsigned char).name() << endl
         << typeid(float).name() << endl
         << typeid(double).name() << endl
         << typeid(string).name() << endl
        << typeid(type_info).name() << endl;




    return 0;
}

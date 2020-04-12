#include <iostream>
#include <string.h>
#include <typeinfo>
using namespace std;

int main()
{
    /*浅拷贝
    只是对指针的拷贝，拷贝之后，两个指针同时指向同一个内存。
   char p1[]=“hello”; char *p2 = p1,只是 拷贝指针，没有分配内存。*/
    char p1[]="hello";
    char *p2 = p1;
    cout<<p1<<endl;//hello
    cout<<sizeof(p1)<<endl;//6

    cout<<p2<<endl;//hello
    cout<<sizeof(p2)<<endl;//4,32bit/4byte
    cout<<*p2<<endl;//h
    cout<<strlen(p1)<<endl;
    cout<<strlen(p2)<<endl;


   /* 深拷贝
    深拷贝就是拷贝他的值，重新生成的对像。char p1[]=“hello”;
    char *p2=new char[];p2=p1;重新new申请内存空间。
    简单的说，深浅拷贝就是看是否重新申请内存空间。*/
    cout<<"***********************"<<endl;
    char p3[]="helloworld";
    cout<<p3<<endl;
    char *p4=new char[11];
    strcpy(p4,p3);
    cout<<p4<<endl;
    p4=p3;
    cout<<p3[9]<<"  typeid:"<<typeid(p3[6]).name()<<endl;
    cout<<p4[9]<<"  typeid:"<<typeid(p4[6]).name()<<endl;
    cout<<strlen(p3)<<endl;
    cout<<strlen(p4)<<endl;





    return 0;
}

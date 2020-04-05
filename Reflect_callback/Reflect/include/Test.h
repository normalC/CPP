#ifndef __TEST_H
#define __TEST_H

#include <iostream>

class Test{
public:
    Test(){ std::cout <<m_total++<< "   调用Test类的构造函数，对象首地址为：" <<this <<  std::endl; }
    ~Test(){ std::cout<<m_total++<< "   调用Test类的析构函数!" << std::endl; }
    void print(){ std::cout<<m_total++<< "   调用Test类对象的fun函数!" <<std::endl; }
public:
     static int m_total;
};
int Test::m_total = 0;

void* create_Test(){
    std::cout << "创建create_Test()函数创建Test类对象--begin" <<  std::endl;
    Test *t = new Test;
    std::cout << "创建Test类对象,返回对象首地址：" <<t <<  std::endl;
    return (t == NULL)? NULL:t;
}


#endif

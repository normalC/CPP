#ifndef __TEST_H
#define __TEST_H

#include <iostream>

class Test{
public:
    Test(){ std::cout <<m_total++<< "   ����Test��Ĺ��캯���������׵�ַΪ��" <<this <<  std::endl; }
    ~Test(){ std::cout<<m_total++<< "   ����Test�����������!" << std::endl; }
    void print(){ std::cout<<m_total++<< "   ����Test������fun����!" <<std::endl; }
public:
     static int m_total;
};
int Test::m_total = 0;

void* create_Test(){
    std::cout << "����create_Test()��������Test�����--begin" <<  std::endl;
    Test *t = new Test;
    std::cout << "����Test�����,���ض����׵�ַ��" <<t <<  std::endl;
    return (t == NULL)? NULL:t;
}


#endif

#ifndef __CLASSFACTORY_
#define __CLASSFACTORY_

#include <iostream>
#include<string>
#include<map>

//���庯��ָ��
typedef void* (*create_fun)();

class ClassFactory{
public:
    ~ClassFactory() {};

    //������ע��ʱ������, ������ʵ��, ������
    void* getClassByName(std::string name){

        std::map<std::string, create_fun>::iterator it = my_map.find(name);
        if (it == my_map.end()) {
                return NULL; }

        create_fun fun = it->second;

        if (!fun) { return NULL; }
        std::cout<<"getClassByName()"<<&fun<<std::endl;
        return fun();
    }

    //ע����������ָ�뺯����ӳ���ϵ
    void registClass(std::string name, create_fun fun){
        std::cout<<"�Ѷ�������KEY����"<< name <<"���������ȵ�ַ"<<&fun<<"����MAP" <<std::endl;
        my_map[name] = fun;
    }

    //����ģʽ ��������̬��Ա������
    static ClassFactory& getInstance(){
        static ClassFactory fac;
        std::cout<<"���ش���ClassFactory����󣬶������ȵ�ַΪ��"<< &fac <<std::endl;
        return fac;
    }

private:
    ClassFactory() {};  //˽��
    std::map<std::string, create_fun> my_map;
};

#endif

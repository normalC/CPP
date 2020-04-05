#ifndef __CLASSFACTORY_
#define __CLASSFACTORY_

#include <iostream>
#include<string>
#include<map>

//定义函数指针
typedef void* (*create_fun)();

class ClassFactory{
public:
    ~ClassFactory() {};

    //根据类注册时的名字, 创建类实例, 并返回
    void* getClassByName(std::string name){

        std::map<std::string, create_fun>::iterator it = my_map.find(name);
        if (it == my_map.end()) {
                return NULL; }

        create_fun fun = it->second;

        if (!fun) { return NULL; }
        std::cout<<"getClassByName()"<<&fun<<std::endl;
        return fun();
    }

    //注册类名称与指针函数到映射关系
    void registClass(std::string name, create_fun fun){
        std::cout<<"把对象名（KEY）："<< name <<"，对象首先地址"<<&fun<<"接入MAP" <<std::endl;
        my_map[name] = fun;
    }

    //单例模式 ，声明静态成员函数，
    static ClassFactory& getInstance(){
        static ClassFactory fac;
        std::cout<<"返回创建ClassFactory类对象，对象首先地址为："<< &fac <<std::endl;
        return fac;
    }

private:
    ClassFactory() {};  //私有
    std::map<std::string, create_fun> my_map;
};

#endif

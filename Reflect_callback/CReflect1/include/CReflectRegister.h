#ifndef CREFLECTREGISTER_H
#define CREFLECTREGISTER_H

#include <string>
#include <map>
#include "CReflectBase.h"

//把类名添加到map
#define ADD_CLASS_REGISTER(className) g_ReflectRegisterMap.insert(std::make_pair(#className, []() -> CReflectBase* {return new className; }))

//创建对象的函数指针
typedef CReflectBase* (*PF_CREATE_OBJECT)();

//类名创建对象
CReflectBase* ClassNameCreateObj(std::string _ClassName);

//初始化类名注册，
void InitClassReflect();

#endif // CREFLECTREGISTER_H

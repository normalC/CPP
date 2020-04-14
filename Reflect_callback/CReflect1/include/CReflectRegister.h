#ifndef CREFLECTREGISTER_H
#define CREFLECTREGISTER_H

#include <string>
#include <map>
#include "CReflectBase.h"

//��������ӵ�map
#define ADD_CLASS_REGISTER(className) g_ReflectRegisterMap.insert(std::make_pair(#className, []() -> CReflectBase* {return new className; }))

//��������ĺ���ָ��
typedef CReflectBase* (*PF_CREATE_OBJECT)();

//������������
CReflectBase* ClassNameCreateObj(std::string _ClassName);

//��ʼ������ע�ᣬ
void InitClassReflect();

#endif // CREFLECTREGISTER_H

#include "CReflectRegister.h"

#include "CReflectRegister.h"
#include "CA.h"
#include "CB.h"

//����һ��ȫ�ֵ�map�����ַ�������̬�����ɵĺ���ָ���ӳ���
std::map<std::string, PF_CREATE_OBJECT> g_ReflectRegisterMap;

CReflectBase* ClassNameCreateObj(std::string _ClassName)
{
    //���ж��Ƿ��Ѿ���ʼ������֧���̰߳�ȫ�������Ҫ�漰���ó�ʼ����ŵ����߳��л��߼Ӹ��ٽ���
    if (0 == g_ReflectRegisterMap.size())
    {
        InitClassReflect();
    }
    auto itr = g_ReflectRegisterMap.find(_ClassName);
    if (itr != g_ReflectRegisterMap.end())
	{
        return ((PF_CREATE_OBJECT)itr->second)();
	}
    return nullptr;
}

inline void InitClassReflect()
{
    //Ҫ�������������
    ADD_CLASS_REGISTER(CA);
    ADD_CLASS_REGISTER(CB);

}


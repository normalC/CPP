#include "CReflectRegister.h"

#include "CReflectRegister.h"
#include "CA.h"
#include "CB.h"

//定义一个全局的map保存字符串到动态类生成的函数指针的映射表
std::map<std::string, PF_CREATE_OBJECT> g_ReflectRegisterMap;

CReflectBase* ClassNameCreateObj(std::string _ClassName)
{
    //先判断是否已经初始化，不支持线程安全，如果需要涉及，该初始化请放到主线程中或者加个临界锁
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
    //要反射的类必须添加
    ADD_CLASS_REGISTER(CA);
    ADD_CLASS_REGISTER(CB);

}


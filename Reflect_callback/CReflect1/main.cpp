#include "CReflectRegister.h"

int main()
{
    auto obj = ClassNameCreateObj("CA");
    if (nullptr != obj)
    {
        obj->ShowTest();
        delete obj;
    }

    obj = ClassNameCreateObj("CB");
    if (nullptr != obj)
    {
        obj->ShowTest();
        delete obj;
    }

    return 0;
}


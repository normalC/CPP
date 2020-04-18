#include <iostream>
#include <map>


using namespace std;

class Base{

public:
B (){}
};

class C:public Base {
public:
C(){}
void show(void){cout<<"show"<<endl;}
};



typedef Base* (*getBase) ();

map<string, getBase> generatorMap;

#define CREATE_GENERATOR(class_name) \
static Base* gen_##class_name(){ \
return new class_name(); \
}

#define REGISTRY_CLASS_GENERATOR(class_name) \
CREATE_GENERATOR(class_name); \
generatorMap[#class_name] = &gen_##class_name;



map<string, Base*> instanceMap;

#define REGISTRY_CLASS(class_name) \
class registry_##class_name { \
public: \
registry_##class_name() { \
instanceMap[#class_name] = new class_name(); \
} \
}; registry_##class_name registry_##class_name##inst;



int main()

{
    REGISTRY_CLASS(C)

/*    展开之后
    class registry_C {
        public:
            registry_C() {
                instanceMap["C"] = new C();}
            show(){
                cout<<"show"<<endl;}};
    registry_C registry_Cinst;*/


    Base* inst = (generatorMap["C"])();




    return 0;
}









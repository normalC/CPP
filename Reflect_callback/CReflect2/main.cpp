#include <iostream>
#include <map>

using namespace std;



class Base{
public:
Base(){}
};

class C:public Base {
public:
C(){}
};

clas A:public Base {
public:
A(){};

};

class B:public Base {
public:
B(){};
};



#define REGISTRY_CLASS(class_name) \
class registry_##class_name { \
public: \
registry_##class_name() { \
instanceMap[#class_name] = new class_name(); \
} \
}; registry_##class_name registry_##class_name##inst;


int main()

{  map<string, Base*> instanceMap;
    REGISTRY_CLASS(A)
    cout << "Hello world!" << endl;
    return 0;
}

#include "Test.h"
//#include "class_factory.h"
#include "ClassFactory.h"

int main(){
    std::cout << "------------------------ע��------------------------" << std::endl;
    ClassFactory ::getInstance().registClass("koofoo", create_Test);


     std::cout<<std::endl<<std::endl<< "------------------------��ȡ�����------------------------" << std::endl;
    //��ȡ�����
    Test *t = (Test*)ClassFactory::getInstance().getClassByName("koofoo");
    if (!t){
        std::cout << "get instnce Test err;" << std::endl;
        return 1;
    }

    t->print();
    delete t;
    return 0;
}

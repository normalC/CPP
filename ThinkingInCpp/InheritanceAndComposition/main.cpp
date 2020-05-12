#include<iostream>
using namespace std;

class TC{

//********1********
static int Num;
int Own;
public:
TC(int i){Own=i;}

//********2********


//********3********
static int get(TC*obj)
{return Num+obj->Own;}
};

int TC::Num=10;

int main(){
TC obj(11);
//********4********
cout<<obj.get(&obj)<<endl;
return 0;
}
/*43使用VC++6.0打开考生文件夹下的源程序文件3.cpp。其中定义的类并不完整，按要求完成下列操作，将类的定义补充完整，使得程序的输出结果为21。

　　(1)增加静态私有变量Num，类型为int，请在注释1后添加适当的语句。

　　(2)增加静态变量Num并初始化为10，请在注释2后添加适当的语句。

　　(3)完成静态函数get的定义，请在注释3后添加适当的语句。

　　(4)完成对象obj对静态函数get的调用，使得输出结果

　　为21，请在注释4后添加适当的语句。

　　注意：增加或者修改代码的位置已经用符号表示出来，请不要修改其他的程序代码。*/

#include <iostream>

using namespace std;



class CDummy{
float i,j;
public:
CDummy():i(100),j(110){}
};

class CAddition {
  private:
    int x,y;
  public:
    CAddition (int a, int b) { x=a; y=b; }
    int result() { return x+y;}
    void set(int a, int b) { x=a; y=b; }
};

class CBase
{
    virtual void dummy(){};
};

class CDerived: public CBase
 {
 };

class A {virtual void f(){}};
class B {virtual void f(){}};

class C {};
class D {};

void Print (char * str)
{
  cout << str << endl;
}




int main () {
 //  CDummy d;
  // CAddition * padd;
//    padd = static_cast<CAddition*> (&d);
 //  cout << padd->result();

CBase bb;
CBase* pb;
cout << pb << endl;
CDerived dd;
CDerived* pd;
cout << pd << endl;

pb = dynamic_cast<CBase*>(&dd);
cout << pb << endl;
pd = dynamic_cast<CDerived*>(&bb); //pd=null;
//将父类经过dynamic_cast转成子类的指针竟然是空指针！这正是dynamic_cast提升安全性的功能，
//dynamic_cast可以识别出不安全的下行转换，但并不抛出异常，而是将转换的结果设置成null（空指针）
cout << pd << endl;

try {
    CBase * pba = new CDerived;
    CBase * pbb = new CBase;
    CDerived * pdd;

    pdd = dynamic_cast<CDerived*>(pba);
    cout << "pdd = dynamic_cast<CDerived*>(pba)" <<pdd << endl;
    if (pdd==0) cout << "Null pointer on first type-cast" << endl;

    pdd = dynamic_cast<CDerived*>(pbb);
    cout << "pdd = dynamic_cast<CDerived*>(pbb)" <<pdd << endl;
    if (pdd==0) cout << "Null pointer on second type-cast" << endl;

  } catch (exception& e) {cout << "Exception: " << e.what();}



    A* paa = new A;
    B* pbb = new B;
    void* pv = dynamic_cast<void*>(paa);
    cout << pv << endl;
    // pv now points to an object of type A

    pv = dynamic_cast<void*>(pbb);
    cout << pv << endl;
cout <<"******************" << endl;
C * c = new C;
 cout << c << endl;
D * d  = reinterpret_cast<D*>(c);//correct!
 cout << d << endl;

cout <<"******************" << endl;



  const char * f = "sample text";
  char *cc = const_cast<char *> (f) ;
  Print(cc);
  cc="sample tex1";
  Print(cc);
  return 0;





}




/*
static_cast <new_type> (expression)  静态转换:静态转换是最接近于C风格转换，
                                    很多时候都需要程序员自身去判断转换是否安全。比如：
                                        double d=3.14159265;
                                        int i = static_cast<int>(d);
                                    但static_cast已经有安全性的考虑了，比如对于不相关类指针之间的转换。

dynamic_cast <new_type> (expression) 动态转换:动态转换确保类指针的转换是合适完整的，
                                        它有两个重要的约束条件，其一是要求new_type为指针或引用，
                                        其二是下行转换时要求基类是多态的（基类中包含至少一个虚函数）
                                        。
reinterpret_cast <new_type> (expression)   重解释转换:这个转换是最“不安全”的，
                                        两个没有任何关系的类指针之间转换都可以用这个转换实现
const_cast <new_type> (expression) 常量向非常量转换:
*/

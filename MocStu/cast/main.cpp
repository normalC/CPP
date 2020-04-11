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
//�����ྭ��dynamic_castת�������ָ�뾹Ȼ�ǿ�ָ�룡������dynamic_cast������ȫ�ԵĹ��ܣ�
//dynamic_cast����ʶ�������ȫ������ת�����������׳��쳣�����ǽ�ת���Ľ�����ó�null����ָ�룩
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
static_cast <new_type> (expression)  ��̬ת��:��̬ת������ӽ���C���ת����
                                    �ܶ�ʱ����Ҫ����Ա����ȥ�ж�ת���Ƿ�ȫ�����磺
                                        double d=3.14159265;
                                        int i = static_cast<int>(d);
                                    ��static_cast�Ѿ��а�ȫ�ԵĿ����ˣ�������ڲ������ָ��֮���ת����

dynamic_cast <new_type> (expression) ��̬ת��:��̬ת��ȷ����ָ���ת���Ǻ��������ģ�
                                        ����������Ҫ��Լ����������һ��Ҫ��new_typeΪָ������ã�
                                        ���������ת��ʱҪ������Ƕ�̬�ģ������а�������һ���麯����
                                        ��
reinterpret_cast <new_type> (expression)   �ؽ���ת��:���ת���������ȫ���ģ�
                                        ����û���κι�ϵ����ָ��֮��ת�������������ת��ʵ��
const_cast <new_type> (expression) ������ǳ���ת��:
*/

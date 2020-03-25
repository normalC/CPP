#include <iostream>
#include <functional>

    using namespace std;
    using namespace std::placeholders;

    typedef std::function<void(int,int)> Fun;

    class B{
        public:
            void call(int a,Fun f)
            {
                f(a,2);
            }
    };

    class Test{
    public:
        void callback(int a,int b)
        {
            cout<<a<<"+"<<b<<"="<<a+b<<endl;
        }

        void bind()
        {
            Fun fun=std::bind(&Test::callback,this,_1,_2);
            B b;
            b.call(1,fun);
        }

    };


    void printWelcome(int len)
    {
           printf("welcome -- %d\n", len);
    }

    void printGoodbye(int len)
    {
           printf("byebye-- %d\n", len);
    }

    void callback(int times, void (* print)(int))
    {
           int i;
           for (i = 0; i < times; ++i)
           {
                  print(i);
           }
           printf("\n welcome or byebye !\n");
    }
   int main(void)
    {
           callback(10, printWelcome);//普通回调
           callback(10, printGoodbye);//普通回调
        Test test;
        test.bind();
        return 0;
           return 0;
    }

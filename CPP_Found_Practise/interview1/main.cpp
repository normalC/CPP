#include <iostream>

//求一个数中1的位数，可以直接逐位除十取余判断

using namespace std;
static int z=0;

int fun(long x)
{
int _count = 0;
while(x)
{
    if(x % 10 == 1)
            ++_count;

    x /= 10;
    z++;
}
return _count;
}



    int main()
    {
        cout << fun(234567) << endl;
        cout<<z<<endl;
        return 0;
    }


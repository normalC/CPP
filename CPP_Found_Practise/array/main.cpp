#include <iostream>

using namespace std;
void printIntegerTable(const int *table,int size)
{
    for(int i=0;i<size;++i)
        cout<<table[i]<<" ";
    cout<<endl;
}

int main()
{
    const int fibonacci[10]={0,1,1,2,3,5,8,13,21,34};
    cout<<fibonacci<<endl;
    printIntegerTable(fibonacci,10);//&fibonacci[]和fibonacci效果一样


    int temp[sizeof(fibonacci)/sizeof(fibonacci[0])]={0};
    cout<<temp<<endl;
    printIntegerTable(temp,10);

    memcpy(temp,fibonacci,sizeof(fibonacci));
    printIntegerTable(temp,10);
    cout<<fibonacci<<endl;
    cout<<temp<<endl;
    return 0;

}

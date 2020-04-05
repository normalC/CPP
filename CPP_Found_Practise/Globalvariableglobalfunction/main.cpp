#include <iostream>
#include <soft.h>


using namespace std;



int main()
{
softwareinc::populateRandomArray();
for(int i=0;i<6;++i)
    cout<<softwareinc::radomNumber[i]<<endl;
}

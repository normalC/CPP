#include <iostream>
#include "squre.h"

using namespace std;


int main(int argc,char *argv[])
{
   if(argc != 2){
       cerr<<"Usage:squae<number>"<<endl;
       return 1;
   }
   double n=strtod(argv[1],0);
   cout<<"The squae of"<<argv[1]<<" is "
      <<square(n)<<endl;
   return 0;
}
/*如果把程序房住"squre.h"中就只有一个目标文件；
如果.h文件和.cpp文件分开就有两个目标文件；
.h头文件不是编译单元，所以不会产生任何目标文件，
只包含一些让不同编译单元能够互相联系的声明而已
所以把程序房住头文件.h中不合适*/

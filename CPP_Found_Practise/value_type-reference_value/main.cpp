#include <iostream>
#include "point2d.h"

using namespace std;

int main()
{
int i=5;
cout<<"i: "<<i<<endl;

int j=10;
cout<<"j: "<<j<<endl;

i=j;
cout<<"i: "<<i<<"j: "<<j<<endl;

Point2D *ii=new Point2D(5,5);
ii->show();

Point2D *jj=new Point2D(10,10);
jj->show();


*ii=*jj;
ii->show();








}

#include <iostream>
#include "point2d.h"

using namespace std;

int main()
{


    Point2D alpha(12.5,40.0);
    alpha.show();

    Point2D beta(77.5,50.0);
    beta.show();

    Point2D ptr=alpha + beta;
    ptr.show();

    Point2D ptr1=alpha - beta;
    ptr1.show();

    alpha+=beta;
    alpha.show();
    alpha-=beta;
    beta.show();




    return 0;
}

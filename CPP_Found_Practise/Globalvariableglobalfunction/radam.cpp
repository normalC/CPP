#include <soft.h>

int softwareinc::radomNumber[6];
static int seed=2;

static int nextRandomNumber()
{
    seed=3+(seed*2);
    return seed;
}

void softwareinc::populateRandomArray()
{
    for(int i=0;i<6;++i)
        radomNumber[i]=nextRandomNumber();
}

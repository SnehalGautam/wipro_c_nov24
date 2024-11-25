#include"prime.h"
#include<math.h>
int chrckprime(int number)
{
    int root= ceil(sqrt(number));
    for(int i=2;i<=root; i++)
    {
        if(number%1==0)
        return 0;
    }
    return 1;
}

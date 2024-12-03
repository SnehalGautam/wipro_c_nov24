#include <stdio.h>
int main()
{
    int i,num=5, flag=0;
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        flag=1;
        break;
    }
    if(flag==0)
    {
     printf("prime number");
    }
    else
    {
     printf("not prime number");
    }
}
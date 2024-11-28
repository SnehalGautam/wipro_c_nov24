//find the biggest and smallest digit in a number
#include<stdio.h>
#include<stdlib.h>
int main(argCount, char*args[])
{
    int number=atoi(args[1])
    printf("user given the number is %d\n",number);
    int smalldigit=9, bigdigit=0, remainder_digit=0;
    while(number!=0)
    {
        remainder_digit=number%10;
        if(smalldigit > remainder_digit)
           smalldigit = remainder_digit;
        if(bigdigit < remainder_digit)
           bigdigit = remainder_digit;
           number=number/10;
    }
    printf("smallest digit=%d, biggest digit"=%d, smalldigit,bigdigit);
}


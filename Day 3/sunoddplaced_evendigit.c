//Find sum of Odd placed even digits in a number
#include<stdio.h>
#include<stdlib.h>
int main(argCount, char*args[])
{
    int number=atoi(args[1]);
    int sumofDigit1=0,sumofDigit2=0, flip=0, remainderDigit=0;

    printf("user given the number is %d\n",number);
    
    while(number!=0)
    {
        remainderDigit=number%10;
        number=number/10;
        if(flip==0)
        {
            if(remainderDigit%2==0)
            sumofDigit1= sumofDigit1+ remainderDigit;
            flip=1;
        }
        else
        {
            if(remainderDigit%2==0)
            sumofDigit2= sumofDigit2+ remainderDigit;
            flip=0;
        }
    }
    if (flip==1)
       printf("sum of odd placed even digit is %d",sumofDigit1);
     else
       printf("sum of odd placed even digit is %d",sumofDigit2);

}
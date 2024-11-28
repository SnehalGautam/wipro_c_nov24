







//p28
Find the biggest and smallest digits in a number
 
 
----------------------------------------------------------------------
p29
Count the number of Even digits in a number
 
----------------------------------------------------------------------
*p30
Find sum of Even placed digits in a number
 
----------------------------------------------------------------------
p31
Find sum of Odd digits in a number
 
----------------------------------------------------------------------
p32
Check if a number is Palindrome
 
----------------------------------------------------------------------
p33
Find sum of Odd placed Even digits in a number
 
----------------------------------------------------------------------
p34a
Find sum of the series: n + n2 + n3 + .... 10 terms
 
p34b
Find sum of the series: 1 - n + n2 - n3 + .... m terms
 
p34c
Find sum of the series: n - n2/3 + n4/5 - n8/7 + .... m terms (1<=n<=3,1<=m<=10)



//find sum of even places digits in a number
#include<stdio.h>
#include<stdlib.h>
int main(argCount, char*args[])
{
    int number=atoi(args[1])
    printf("user given the number is %d\n",number);
    int number,  remainderDigit, sum1=0,,sum2=0,flip=0 ;

    while (number != 0)
    {
        remainderDigit = number % 10; 
        number = number / 10; 

        if (flip== 0)
        {
            sum1 = sum1 + remainderDigit; 
            flip=1; 
        }
        else
        {
            sum2 = sum2 + remainderDigit; 
            flip=0; 
        }  
    }
    if(flip==0)
       printf("Sum of even placed digits is: %d\n", sum1);
    else
       printf("Sum of even placed digits is: %d\n", sum2);
}


    
//Find sum of Odd placed odd digits in a number //maybe rong
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
    

// Find sum of Even placed Even digits in a number
#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char *args[])
{
    int inputNumber = atoi(args[1]);
    int sumOfDigits1 = 0, sumOfDigits2 = 0, flip = 0, remainderDigit = 0;
    printf("User given number is %d \n", inputNumber);
    while (inputNumber != 0)
    {
        remainderDigit = inputNumber % 10;
        inputNumber = inputNumber / 10;
        if (flip == 0)
        {
            if (remainderDigit % 2 == 0)
                sumOfDigits1 += remainderDigit;
            flip = 1;
        }
        else
        {
            if (remainderDigit % 2 == 0)
                sumOfDigits2 += remainderDigit;
            flip = 0;
        }
    }
    if (flip == 0)
        printf("Sum of Even placed Even digits is %d", sumOfDigits1);
    else
        printf("Sum of Even placed Even digits is %d", sumOfDigits2);
}




//count the number of even digit in a number
#include<stdio.h>
#include<stdlib.h>
int main(argCount, char*args[])
{
    int number=atoi(args[1])
    printf("user given the number is %d\n",number);
    int number, remainerDigit, CountOfEvenDigit = 0;
     while (number != 0) 
    {
        remainerDigit = number % 10; 
        if (remainerDigit% 2 == 0)
        { 
          CountOfEvenDigit++;
   
        }
        number = number / 10; 
    }
    printf("Number of even digits: %d\n", CountOfEvenDigit);
}



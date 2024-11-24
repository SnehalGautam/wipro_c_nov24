//count the number of even digit in a number
#include<stdio.h>
#include<stdlib.h>

int CountOfEvenDigit(int number)
{
    int number, remainerDigit, CountOfEvenDigit = 0;
     while (number != 0) 
    {
        remainerDigit = number % 10; 
        number = number / 10; 

        if (remainerDigit% 2 != 0)
          CountOfEvenDigit++;
    }
}  return CountOfEvenDigit;

    int main(argCount, char*args[])
   {
      int number=atoi(args[1])
      printf("user given the number is %d\n",number);
      int CountOfEvenDigit = CountOfEvenDigit(number);
      printf("user given the number is %d\n",number);

    }
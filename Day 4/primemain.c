#include "prime.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char *args[])
{
    int inputNumber=atoi(args[1]);
    printf("the input number is %d\n" ,inputNumber);
    int inputNumber=atoi(args[1]);
    if(checkprime(inputNumber)==1)
       printf(" %d is prime number",inputNumber);
    else
        printf(" %d is not prime number",inputNumber);
}


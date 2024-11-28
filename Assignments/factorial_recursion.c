//Find the frequency of an element of user choice in an array of size N which is also given user 
//(array is of type int) 
#include <stdio.h>
#include <stdlib.h>

long long unsigned int findFactorial(unsigned short int num) 
    if (n == 0 || n == 1) {
{
    if (num == 1 || num == 0)
        return 1;
    return num * findFactorial(num - 1);
}

int main(int argCount, char **args) // char* args[]
{
    unsigned short int inputNumber = atoi(args[1]);
    long long unsigned int factorialNumber = findFactorial(inputNumber);
    printf("Factorial of %u is %lu", inputNumber, factorialNumber);
}


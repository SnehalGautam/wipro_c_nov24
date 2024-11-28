//2 Find sum of digits of a number using recursion
#include <stdio.h>
#include <stdlib.h>

int sum_of_digits(int num) {
    if (num == 0) {
        return 0; 
    }
    return (num % 10) + sum_of_digits(num / 10); 
}

int main(int argCount, char **args) // char* args[]
{
    if (argCount != 2)
    {
        printf("Usage: %s <number>\n", args[0]);
        return 1; 
    }
    int inputNumber = atoi(args[1]);
    int sum = sum_of_digits(inputNumber);
    printf("sum of digit of %d is %d", inputNumber, sum);
}


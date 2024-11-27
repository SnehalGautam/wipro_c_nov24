#include<stdio.h>
#include<stdlib.h>
int main(argCount, char** args)
{
    double num1=atoi(args[1]);
     double num1=atoi(args[1]);
    printf("Before swapping num1=%lf, Num2=%lf\n", num1, num2);
    swapnumber(num1, num2);
    printf("After swapping num1=%lf, Num2=%lf\n", num1, num2);
}
void swapnumber(double num1, double num2)
{
    double temp = num1;
    num1 = num2;
    num2 = temp;
})
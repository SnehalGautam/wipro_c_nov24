#include<stdio.h>

int main()
{
    int num1 = 50; //assume address of num1 is 200
    int *num2 = num1;
    printf("%d  %d  %d  %d\n", num1-1,num1, num1+1, num1+2);
    printf("%d  %d  %d  %d\n", num2-1,num2, num2+1, num2+2);
}
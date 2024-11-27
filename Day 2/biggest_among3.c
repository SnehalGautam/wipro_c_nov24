//Find biggest among 3 distinct numbers using ternary operator
#include<stdio.h>
int main(){
    int num1=0, num2=0, num3=0, smallNum=0, bigNum=0;
    printf("%d%d%d" , &num1, &num2, &num3);
   
   bigNum=(num1>num2)? num1 : num2;
   printf("%d is biggest", bigNum);
}

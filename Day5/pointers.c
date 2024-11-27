#include<stdio.h>
int main()
{
    float num = 2.22;
    float *ptr = &num;
    printf("value of num = %.2f\n",num);
    printf("address of num = %p %u \n",&num, &num);
    printf("value of num = %.2f\n",*(&num));
    printf("address of num = %p %u \n",ptr, ptr);
    printf("value of ptr = %p %u \n",ptr, ptr);
    printf("value of ptr = %p %u \n",&num, &num);
    printf("address of ptr = %p %u \n",&ptr, &ptr);
    printf("value of num = %f\n",*ptr);
    printf("address of num = %p \n",*(&num));
}
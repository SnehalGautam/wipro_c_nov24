#include<stdio.h>
#include<stdlib.h>
int findSum(int *ptr, int size)
int main(argCount, char** args)
{ 
    if(size == 1)
    return ptr[0];
    return ptr[size - 1] + findSum(ptr, size - 1);
}

int main( int argCount, char **args)
{
    int arraySize = atoi(args[i]);
    int array[50]={0};
    printf("enter %d number of the array\n",arraySizeize);
    for(int i=0; i < arraySize; i++)
    scanf("%d", &array[i]);

    int sum = findSum(array, arraySize);
    printf("sum of the array number = %d\n", sum);
}
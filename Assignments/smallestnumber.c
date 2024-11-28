//3. Find smallest number in an array of size N using recursive function.
#include <stdio.h>
#include <stdlib.h>

int find_smallest(int array[], int num)
{
    if (num == 1)
    {
        return array[0]; 
    }
    int smallest_of_rest = find_smallest(array, num - 1);
    return (array[num - 1] < smallest_of_rest) ? array[num - 1] : smallest_of_rest;
}

int main(int argCount, char **args)
{
    if (argCount < 2)
    {
        printf("size_of_array= %s\n", args[0]);
        return 1;
    }
    int num = atoi(args[1]);
    int array[num];

    printf("Enter %d numbers for the array:\n", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    int smallest = find_smallest(array, num);
    printf("The smallest number in the array is: %d\n", smallest);
}
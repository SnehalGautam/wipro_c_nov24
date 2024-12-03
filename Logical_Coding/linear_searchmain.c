//Implement Linear(sequential) search using a multi file program.

#include <stdio.h>
#include "linear_search.h"

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the number to search: ");
    scanf("%d", &target);

    int result = linear_search(arr, size, target);

    if (result != -1)
    {
        printf("Number %d found at index %d.\n", target, result);
    } 
    else 
    {
        printf("Number %d not found in the array.\n", target);
    }

    return 0;
}
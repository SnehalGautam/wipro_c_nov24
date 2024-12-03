//Find sum of the elements of an array using a recursive function
#include <stdio.h>

int sum_of_array(int arr[], int n)
 {
   if (n == 0) 
   {
        return 0;
    }
    return arr[n - 1] + sum_of_array(arr, n - 1);
}
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    int result = sum_of_array(array, size);
    printf("Sum of the array: %d\n", result);

    return 0;
}
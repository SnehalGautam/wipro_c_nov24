// Function to swap consecutive elements of an array
#include <stdio.h>
void swap_consecutive_elements(int arr[], int size)
{
    for (int i = 0; i < size - 1; i += 2)
    {
       
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    swap_consecutive_elements(array, size);

    printf("Array after swapping consecutive elements: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
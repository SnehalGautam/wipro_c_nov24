//Swap the 1st half of an Array with the 2nd half elements
#include <stdio.h>

void swap_array_halves(int arr[], int size) {
    int mid = size / 2;

    for (int i = 0; i < mid; i++) 
    {
        int temp = arr[i];
        arr[i] = arr[mid + i];
        arr[mid + i] = temp;
    }
}

void print_array(int arr[], int size)
 {
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (size % 2 != 0) 
    {
        printf("Array size must be even to swap halves.\n");
        return 1;
    }

    printf("Original Array:\n");
    print_array(arr, size);

    swap_array_halves(arr, size);

    printf("Array after swapping halves:\n");
    print_array(arr, size);

    return 0;
}
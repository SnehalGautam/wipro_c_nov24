//Remove duplicate elements from the Array and shift the elements (If n duplicate elements are removed then n zeroes should trail in the array)

#include <stdio.h>
void remove_duplicates_and_shift(int arr[], int size) {
    int unique_index = 0;

    for (int i = 0; i < size; i++)
    {
        int is_duplicate = 0;

        for (int j = 0; j < unique_index; j++)
        {
            if (arr[i] == arr[j]) 
            {
                is_duplicate = 1;
                break;
            }
        }

        if (!is_duplicate) 
        {
            arr[unique_index++] = arr[i];
        }
    }

    for (int i = unique_index; i < size; i++)
    {
        arr[i] = 0;
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

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) 
    {
        printf("Invalid size! Size must be greater than 0.\n");
        return 1;
    }

    int arr[size];
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original Array:\n");
    print_array(arr, size);

    remove_duplicates_and_shift(arr, size);

    printf("Array after removing duplicates and shifting:\n");
    print_array(arr, size);

    return 0;
}
//Find the smallest and biggest elements of the array of size N which is given by user (array is of type double)

#include <stdio.h>
void find_min_max(double arr[], int size, double *min, double *max)
{
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++) 
    {
        if (arr[i] < *min) 
        {
            *min = arr[i];
        }
        if (arr[i] > *max) 
        {
            *max = arr[i];
        }
    }
}

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0)
    {
        printf("Invalid size! Size must be greater than 0.\n");
        return 1;
    }

    double arr[size];

    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%lf", &arr[i]);
    }

    double min, max;

    find_min_max(arr, size, &min, &max);

    printf("Smallest element: %.2lf\n", min);
    printf("Largest element: %.2lf\n", max);

    return 0;
}
//Convert the Odd elements in an array to Even numbers by adding one and Convert the Even elements into Odd by subtracting 1

#include <stdio.h>

void convertArray(int arr[], int size)
{
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] % 2 == 0)
        {
           arr[i] -= 1;
        } 
        else 
        {
           arr[i] += 1;
        }
    }
}

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    convertArray(arr, n);

    printf("Modified array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
#include<stdio.h>
#include<stdlib.h>

float readUserData(float *ptr, int size)
{
    float searchElement = 0.0f;
    printf("enter number of the array=%d\n",size);
    for(int i=0; i< size; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("enter element to be searched");
    scanf("%f", &searchElement);
}

int main(int argCount, char *args[])
{
    int main(int argCount, char *args[1]);

    float *array = (float *)malloc(sizeof(float) * arraySize);
    float searchNumber =readUserData (array, arraySize);

    int index = linearSearch(array, arraySize, searchNumber);
    if(index == -1)
      printf("the search element %f not found in the array", searchNumber);
     else
      printf("the search element is found in the array at index %d", searchNumber,index);
}
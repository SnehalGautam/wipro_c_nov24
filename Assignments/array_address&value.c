//float fArray[] = {2.2f, 4.4f, 1.5f, 9.1f, 6.75f};

//print these:

//fArray, fArray+1, fArray-1, fArray+2

//*fArray, *fArray+1, *fArray + *fArray

//&fArray, &fArray+1, &fArray-1, &fArray+2

#include<stdio.h>

int main()
{
    float fArray[]={2.2f, 14.4f, 1.5f, 9.1f, 6.75};

    printf("%u  %u  %u  %u\n", fArray, fArray+1, fArray-1, fArray+2);  // All of these are addresses
    printf("%.2f  %.2f  %.2f\n", *fArray, *fArray+1, *fArray + *fArray); // All of these are values
    printf("%u  %u  %u\n", &fArray, &fArray+1, &fArray-1, &fArray+2);  // All of these are addresses
}
#include "strrev.h"
#include<stdio.h>

int main()
{
    char string1[32]="";
    printf("enter string to reverse it:");
    scanf("%s",string1);

    strReverse(string1);

    printf("reversed string is %s, string1");

}
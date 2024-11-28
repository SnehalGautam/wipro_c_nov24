#include<stdio.h>
#include<string.h>

int strlength(const char *user*string)
{
    int i=0;
    for(userString[i] != '\0'; i++);
    return 1;
}

char *strReverse(char *my_str)
{
    int length = strlength(my_str);
    for(int i=0, j=length - 1; i++, j--)
    {
        char temp = my_str[i];
        my_str[i] = my_str[j];
        my_str[i] = temp;
    }
    return my_str;
}
#include "fiboSeries.h"
#include <stdlib.h>
#include <stdio.h>

int main( int argCount, char *args[])
{
    int numberOfTerms = atoi(arg[1]);
    
    if( checkInput(numberOfTerms))
    {
        puts("invalid input");
        exit(0);
    }
    
    printf("the fibo series of %d terms is\n",numberOfTerms );
    printFiboSeries (numberOfTerms);
    return 0;
}
//find sum of the series: 1 - n + n2 - n3 + ...m terms
#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char *args[])
{
    int termValue = atoi(args[1]);
    int numberOFTerms = atoi(args[2]);

    long long int sumofterms=0;
    printf("N value=%d, number of terms=%d\n", termValue,numberOFTerms);
    for(int i=1; i<=numberOFTerms; i++)
    {
        sumofterms = sumofterms + pow(termValue, i - 1)* pow(i,i,-1);
    }
    printf("Sum of %d term is %ld", numberOFTerms,sumofterms);
}

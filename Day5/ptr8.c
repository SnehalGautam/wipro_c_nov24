#include<stdio.h>
int main()
{
    char ch='M', *pc=NULL;
    int i=20, *pi=NULL;
    pc=&i;
    pi=&ch;

    {
       printf("%u  %u  %u  %u\n",&i, &i+1, pc, pc+1 );
       printf("%u  %u  %u  %u\n",&ch, &ch+1, pi, pi+1 );
       printf("%c  %c",ch, *pi );
       printf("%d   %d",i, *pc);
    }
}
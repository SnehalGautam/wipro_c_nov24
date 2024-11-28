
#include<stdio.h>
#include<string.h>
int main(int argCount, char *args[])
    {
        char state[10][32] = {""};
        char capital[10][32] = {""};
        char *addressOfSpace = NULL;
        int countOfChars=0;
       

        for(int i=1;i<argCount; i++)
        {
            addressOfSpace = strchr(args[i], '');
            countOfChars = addressOfSpace - args[i];
            strncpy(states[i -1], args[i],countOfChars );
            strncpy(capital[i -1], addressOfSpace+1 );
        }
        printf("%-12s  % -12s\n---------\n", "STATE" , "CAPITAL");

        for(int i=0; i<argCount - 1; i++)
        printf("%-13s%s\n", state[i],capital[i] );
   }

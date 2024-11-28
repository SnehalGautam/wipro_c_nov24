//program to print math table of a number till multiples of 20
    #include<stdio.h>
    #include<stdlib.h>
    int main(int argCount, char*args[]
    {
        int input_number= atoi(args[1]);
        for(int i=1; i<=20;i++)
        {
            printf("%d * %d =%d\n",input_number, input_number *1);
        }
    }
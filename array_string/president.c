
//3D-string store first and second names of last 5 presidents of bhaarat
#include<stdio.h>
#include<string.h>
int main()
    {
        char president_names[5][2][32] = {{""}};
        puts("enter first and second names of last 5 presidents of bhaarat");

        for(int i=0;i<5; i++)
        {
            scanf("%s",&president_names[i][0]);
            scanf("%s",&president_names[i][1]);
        }
        printf("%-12s  % -12s\n---------\n", "FIRST-NAME" , "SECOND-NAME");

        for(int i=0; i<5; i++)
        printf("%-13s%s\n", presidents_names[i][0],presidents_names[i][1] );
   }

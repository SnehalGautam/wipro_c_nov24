8.Declare 3 character variables and accept values, raining=r sunny=s cloudy=c
   Allow the person to go out only if it is:
	1. only sunny
	2. sunny and raining
 #include<stdio.h>
 int main()
 {
    char raining='r';
    char sunny='s';
    char cloudy='c';
    
    printf("Enter the weather status for raining ");
    scanf(" %c", &raining);  

    printf("Enter the weather status for sunny ");
    scanf(" %c", &sunny);

    printf("Enter the weather status for cloudy ");
    scanf(" %c", &cloudy);


    if(sunny== 's'  && (raining ==  'r'  || cloudy!='c'))
    {
       printf("person to go out");
    }
    elseif(sunny== 's' && raining !=  'r' && cloudy!='c' )
    {
      printf("person to go out");
    }
    else
    {
      printf("person cannot go out!\n");
    }
 }
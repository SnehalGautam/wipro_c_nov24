// Check the Armstrong number using function
#include<stdio.h>
int armstrong();   //declare
void main(){
	int ans = armstrong();  //calling the fun

	int lastdigit, num;
	printf("enter the number=");
	scanf("%d",&num);

   int ans = armstrong(num); 

   if (ans==1){
	printf("this is armstrong number");
   }
   else{
   	printf("this is not armstrong number");
   }
}
int armstrong(int num)  
{
	int n=num;
	int sum=0;
		while(n>0)
	{
		lastdigit=n%10;
		sum = sum + (lastdigit*lastdigit*lastdigit);
		n=n/10;
	}
	if(sum==num)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
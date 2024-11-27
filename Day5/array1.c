//find the smallest and biggest element of array of size N which is given by user (array is of type double)
#include<stdio.h>
int main()
{
   int N;
   int i;

   printf("enter the size of the array: ");
   scanf("%d",&N);

   double array[N];
   printf("enter element of the array:%d\n",N);
   for(i=0; i<N; i++)
   {
     scanf("%lf",&array[i]);
   }
   
   double smallest=array[0];
   double largest=array[0];
 
   for(i=1; i<N; i++)
   {
     if(array[i] < smallest)
     {
        smallest=array[i];
     }
     if(array[i] > largest)
     {
       largest=array[i];
     }
   }
   printf("smallest element is=%.2lf\n", smallest);
   printf("gretest element is=%.2lf\n", largest);
}
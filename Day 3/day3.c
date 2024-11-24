// Ask the customer if she wish to have Veg or NonVeg and then Show the specific Menu to customer and accept the food-number from the customer and serve her the food. using do while loop

    /*int foodNumber = 0, foodType = 0; choice=0;

    puts("Welcome to our Hotel \"THE TASTE\"");
    puts("1:Veg 2:NonVeg. Your choice please: ");
    scanf("%d", &foodType);
    do(foodType) {
       
        case 2 : puts("1:Idly-Vada 2:Dosa 3:Poha 4:Alu-Paratha 5:Roti-Sabji. Your choice please");
        scanf("%d", &foodNumber);
        switch (foodNumber)
        {
        case 1: puts("Yummy idli-vada"); break;
        case 2: puts("Tasty Mysuru Dosa"); break;
        case 3: puts("Soft Bhopal Poha"); break;
        case 4: puts("Spicy Punjabi Paratha"); break;
        case 5: puts("Hot and Sweet Roti-Sabji"); break;
        default: puts("Sorry we dont have the food you wish");
        }
       
        case 2 : puts("1:ChickenFry 2:MuttonBiryani 3:FishCurry. Your choice please");
        scanf("%d", foodNumber);
        switch (foodNumber)
        {
        case 1: puts("Yummy chicken"); break;
        case 2: puts("Tasty biryani"); break;
        case 3: puts("Spicy fish curry"); break;
        default: puts("Sorry we dont serve lizards and snakes");
        }
        default: puts("Maam, this is Restaurant and not Garden");
    }
    puts("Namaste Visit Again");
}*/

//program to print math table of a number till multiples of 20
    /*#include<stdio.h>
    #include<stdlib.h>
    int main(int argCount, char*args[]
    {
        int input_number= atoi(args[1]);
        for(int i=1; i<=20;i++)
        {
            printf("%d * %d =%d\n",input_number, input_number *1);
        }
    }

//program to print math table of a number till multiples of 20
#include<stdio.h>
int main()
{
    int i;
    int a;
    for(i=1; i<=20;i++)
    {
        printf("%d*%d=%d");
    }
}

//program to print math table of a number till multiples of 20
    #include<stdio.h>
    #include<stdlib.h>
    int main(argCount. char*arg[])
    {
        int number1=atoi(arg[1]);
        int number2=atoi(arg[2]);
        for(i=1,i<=20;i++)
        {
             printf("%d * %0.2d =%0.3d\t %d * %0.2d =%0.3d\n",input_number1, i,input_number1 *i, input_number2, i,input_number2 *i);
        }
    }*/

//find the biggest and smallest digit in a number
/*#include<stdio.h>
#include<stdlib.h>
int main(argCount, char*args[])
{
    int number=atoi(args[1])
    printf("user given the number is %d\n",number);
    int smalldigit=9, bigdigit=0, remainder_digit=0;
    while(number!=0)
    {
        remainder_digit=number%10;
        if(smalldigit > remainder_digit)
           smalldigit = remainder_digit;
        if(bigdigit < remainder_digit)
           bigdigit = remainder_digit;
           number=number/10;
    }
    printf("smallest digit=%d, biggest digit"=%d, smalldigit,bigdigit);
}*/


//p28
Find the biggest and smallest digits in a number
 
 
----------------------------------------------------------------------
p29
Count the number of Even digits in a number
 
----------------------------------------------------------------------
*p30
Find sum of Even placed digits in a number
 
----------------------------------------------------------------------
p31
Find sum of Odd digits in a number
 
----------------------------------------------------------------------
p32
Check if a number is Palindrome
 
----------------------------------------------------------------------
p33
Find sum of Odd placed Even digits in a number
 
----------------------------------------------------------------------
p34a
Find sum of the series: n + n2 + n3 + .... 10 terms
 
p34b
Find sum of the series: 1 - n + n2 - n3 + .... m terms
 
p34c
Find sum of the series: n - n2/3 + n4/5 - n8/7 + .... m terms (1<=n<=3,1<=m<=10)


//count the number of even digit in a number
#include<stdio.h>
#include<stdlib.h>
int main(argCount, char*args[])
{
    int number=atoi(args[1])
    printf("user given the number is %d\n",number);
    int number, remainerDigit, CountOfEvenDigit = 0;
     while (number != 0) 
    {
        remainerDigit = number % 10; 
        if (remainerDigit% 2 == 0)
        { 
          CountOfEvenDigit++;
   
        }
        number = number / 10; 
    }
    printf("Number of even digits: %d\n", CountOfEvenDigit);
}



//find sum of even places digits in a number
#include<stdio.h>
#include<stdlib.h>
int main(argCount, char*args[])
{
    int number=atoi(args[1])
    printf("user given the number is %d\n",number);
    int number,  remainderDigit, sum1=0,,sum2=0,flip=0 ;

    while (number != 0)
    {
        remainderDigit = number % 10; 
        number = number / 10; 

        if (flip== 0)
        {
            sum1 = sum1 + remainderDigit; 
            flip=1; 
        }
        else
        {
            sum2 = sum2 + remainderDigit; 
            flip=0; 
        }  
    }
    if(flip==0)
       printf("Sum of even placed digits is: %d\n", sum1);
    else
       printf("Sum of even placed digits is: %d\n", sum2);
}

//Find sum of Odd placed even digits in a number
#include<stdio.h>
#include<stdlib.h>
int main(argCount, char*args[])
{
    int number=atoi(args[1]);
    int sumofDigit1=0,sumofDigit2=0, flip=0, remainderDigit=0;

    printf("user given the number is %d\n",number);
    
    while(number!=0)
    {
        remainderDigit=number%10;
        number=number/10;
        if(flip==0)
        {
            if(remainderDigit%2==0)
            sumofDigit1= sumofDigit1+ remainderDigit;
            flip=1;
        }
        else
        {
            if(remainderDigit%2==0)
            sumofDigit2= sumofDigit2+ remainderDigit;
            flip=0;
        }
    }
    if (flip==1)
       printf("sum of odd placed even digit is %d",sumofDigit1);
     else
       printf("sum of odd placed even digit is %d",sumofDigit2);

}
    
//Find sum of Odd placed odd digits in a number //maybe rong
#include<stdio.h>
#include<stdlib.h>
int main(argCount, char*args[])
{
    int number=atoi(args[1]);
    int sumofDigit1=0,sumofDigit2=0, flip=0, remainderDigit=0;

    printf("user given the number is %d\n",number);
    
    while(number!=0)
    {
        remainderDigit=number%10;
        number=number/10;
        if(flip==0)
        {
            if(remainderDigit%2==0)
            sumofDigit1= sumofDigit1+ remainderDigit;
            flip=1;
        }
        else
        {
            if(remainderDigit%2==0)
            sumofDigit2= sumofDigit2+ remainderDigit;
            flip=0;
        }
    }
    if (flip==1)
       printf("sum of odd placed even digit is %d",sumofDigit1);
     else
       printf("sum of odd placed even digit is %d",sumofDigit2);

}
    

// Find sum of Even placed Even digits in a number
#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char *args[])
{
    int inputNumber = atoi(args[1]);
    int sumOfDigits1 = 0, sumOfDigits2 = 0, flip = 0, remainderDigit = 0;
    printf("User given number is %d \n", inputNumber);
    while (inputNumber != 0)
    {
        remainderDigit = inputNumber % 10;
        inputNumber = inputNumber / 10;
        if (flip == 0)
        {
            if (remainderDigit % 2 == 0)
                sumOfDigits1 += remainderDigit;
            flip = 1;
        }
        else
        {
            if (remainderDigit % 2 == 0)
                sumOfDigits2 += remainderDigit;
            flip = 0;
        }
    }
    if (flip == 0)
        printf("Sum of Even placed Even digits is %d", sumOfDigits1);
    else
        printf("Sum of Even placed Even digits is %d", sumOfDigits2);
}


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


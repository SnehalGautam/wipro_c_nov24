//Accept day number from user and print the event of the college fest
#include<stdio.h>
int main(){

    int daynumber=0;
    printf("enter the daynum");
    scanf("%c",&daynumber);

    switch(daynumber){
case1: printf("monday sports"); break;
case2: printf("Tuesday Technical"); break;
case3: printf("Wednesday Cultural"); break;
case4: printf("Thursday ethnic"); break;
case5: printf(" friday funky "); break;
case6: printf("saturday charity"); break;
default: printf("Go back home and sleep"); break;
}

// Ask the customer if she wish to have Veg or NonVeg and then Show the specific Menu to customer and accept the food-number from the customer and serve her the food.
    int foodNumber = 0, foodType = 0;
    puts("Welcome to our Hotel \"THE TASTE\"");
    puts("1:Veg 2:NonVeg. Your choice please: ");
    scanf("%d", &foodType);
    switch(foodType) {
        case 'v' :
        case 'V' : puts("1:Idly-Vada 2:Dosa 3:Poha 4:Alu-Paratha 5:Roti-Sabji. Your choice please");
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
        case 'n' :
        case 'N' : puts("1:ChickenFry 2:MuttonBiryani 3:FishCurry. Your choice please");
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
}
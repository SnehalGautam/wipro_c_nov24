//4.Check if a character is a digit
#included<stdio.h>
include<ctype.h>

int main(){
    char ch;
    print ("enter charecter:");
    scanf("%c", &ch);

    if(isdigit(ch));
    {
        printf("number is digit");
    }
    else
    {
        printf("number is not digit");
    }
}
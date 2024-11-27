//2..check if a character is a alphabet

#included<stdio.h>
int main(){

    char ch;
    printf("enter the charecter");
    scanf("%c",&ch);

    if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z' ))
       printf("Alphabet is=%c",c)
    else
       printf("this is not alphabetis=%c",c);
}
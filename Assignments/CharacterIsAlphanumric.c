//3.check if a character is a alphanumric

#included<stdio.h>
int main(){
    char ch=0;
    print ("enter charecter:");
    scanf("%c", &ch);
     
     int alphanumric(char ch)
    if( alphanumric (ch))
       printf("this is an alphanumric charecter\n");
    else
    printf("this is not an alphanumric charecter\n");
}
   int alphanumric(char ch)
   {
   if((ch>='0' & ch<= '9')||(ch>= 'a' && ch<='z') || (ch>= 'A' && ch<= 'Z')
   return 1;
return 0;
}
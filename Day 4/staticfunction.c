#include<stdio.h>
int nonStaticFunction()
{
  int i=0;
  i=i+2;
  return i;
}
int staticFunction()
{
    int i=0;
    i=i+2;
    return i;
}
int main()
{
    int var=0;

    var=nonStaticFunction();
    printf("var = %d\n", var);
    var=nonStaticFunction()
    printf("var = %d\n", var);
    var=nonStaticFunction()
    printf("var = %d\n", var);

    var=StaticFunction()
    printf("var = %d\n", var);
    var=StaticFunction()
    printf("var = %d\n", var);
    var=StaticFunction()
    printf("var = %d\n", var);
};

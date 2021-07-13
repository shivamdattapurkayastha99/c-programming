#include<stdio.h>
#include<stdlib.h>
void f1(int a)
{
    printf("After calling the function the address is %d",&a);
}
int main(int argc, char const *argv[])
{
   int a=5;
   printf("%d",&a);
   f1(a);
  
    return 0;
}

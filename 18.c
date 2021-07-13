#include<stdio.h>
#include<stdlib.h>

void ten(int *a)
{
    *a*=10;
    printf("%d",a);
}
int main(int argc, char const *argv[])
{
   int a=5;
   printf("Before calling address %d\n",&a);
   printf("After calling address ");
   ten(&a);



    return 0;
}


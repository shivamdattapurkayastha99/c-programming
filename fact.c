#include<stdio.h>
#include<stdlib.h>
int fact(int n)
{
    if(n==0)
    return 1;
    else if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
int main(int argc, char const *argv[])
{
   printf("Enter the number\n");
   int n;
   scanf("%d",&n);
   printf("the factorial of %d is %d",n,fact(n));
    return 0;
}

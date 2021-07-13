#include<stdio.h>
#include<stdlib.h>
int avg(int a,int b,int c)
{
    int average=a+b+c/3;
    return average;
}
float ctof(float c)
{
    float f=(((9/5)*c)+32)/32;
    return f;

}
int fib(int n)
{
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    return fib(n-1)+fib(n-2);


}
int main(int argc, char const *argv[])
{
    int a,b,c,n,ch,avg1,fibonacci;
    float cel,f;
    printf("Enter 1 to calculate average 2 for celsius to fahrenheit 3 to display nth fibonacci number\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
       printf("Enter the first no\n");
       scanf("%d",&a);
       printf("Enter the second no\n");
       scanf("%d",&b);
       printf("Enter the third no\n");
       scanf("%d",&c);
       avg1=avg(a,b,c);
       printf("the average is %d",avg1);


        break;
     case 2:
        printf("Enter the celsius temperature\n");
       scanf("%f",&cel);
       f=ctof(cel);
      printf("The Fahrenheit temperature is  %f",f);
        break;
     case 3:
        printf("Enter the value of n\n");
        scanf("%d",&n);
        printf("The %dth fibonacci number is %d",n,fib(n));
        break;
    
    default:
        break;
    }
    return 0;
}

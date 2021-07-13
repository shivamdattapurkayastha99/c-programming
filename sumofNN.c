#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the last natural number you want the sum of\n");
    scanf("%d",&n);
    int sum=0;
    sum=n*(n+1)/2;
    printf("Sum is %d",sum);
    return 0;
}

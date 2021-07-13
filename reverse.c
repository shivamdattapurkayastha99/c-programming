#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int n,n1,rev=0,d;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        rev=rev*10+d;
        n/=10;
    }
    printf("Reversed number is %d",rev);
    return 0;
}

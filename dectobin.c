#include<stdio.h>
#include<stdlib.h>
void dectobin(int n)
{
    int binary[30];
    int i=0;
    while(n>0)
    {
        binary[i]=n%2;
        n=n/2;
        i++;

    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",binary[j]);

    }
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    dectobin(n);
    
    return 0;
}

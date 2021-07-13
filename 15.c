#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,ch,sum,i;
    printf("Enter the number you want to find multiplication table of\n");
    scanf("%d",&n);
    printf("Enter 1 to print the table in normal order and 2 for reversed order and 3 to print sum of 10 natural numbers\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        for(int i=1;i<=10;i++)
        printf("%d x %d = %d\n",n,i,n*i);
        break;
        case 2:
        for(int i=10;i>=1;i--)
        printf("%d x %d = %d\n",n,i,n*i);
        break;
        case 3:
         i=1;
        sum=0;
        do
        {
            sum=sum+i;
            i++;
        } while (i>=2&&i<=10);
        

        printf("The sum= %d",sum);
        break; 
    }
}
#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
   printf("Enter the no of rows\n");
   int n,i,j;
   scanf("%d",&n);
   for( i=1;i<=n;i++)
   {
       for( j=1;j<=i;j++)
       {
           printf("* ");
       }
       printf("\n");
   }
    return 0;
}

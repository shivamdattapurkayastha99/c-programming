#include<stdio.h>
int main(int argc, char const *argv[])
{
  printf("Enter the no of rows\n");
  int n,i,j,k;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      for(j=n-1;j>=i;j--)
      {
          printf(" ");
      }
      for(k=1;k<=i;k++)
      {
          printf("*");
      }
      printf("\n");
  }


    return 0;
}

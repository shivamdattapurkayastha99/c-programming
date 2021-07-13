#include<stdio.h>
#include<stdlib.h>
int isprime(int n)
{
    int flag=1;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag= 0;
            break;
        }


    }
    return flag;

}
int main(int argc, char const *argv[])
{
   printf("Enter the lower limit of the range\n");
   int n1;
   scanf("%d",&n1);
   printf("Enter the upper limit of the range\n");
   int n2;
   scanf("%d",&n2);
   for(int i=n1;i<=n2;i++)
   {
       if(isprime(i))
       {
           printf("%d\n",i);
       }
   }
    return 0;
}

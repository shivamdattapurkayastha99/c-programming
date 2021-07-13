#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the no whose multiplication table you want to generate\n");
    scanf("%d",&num);
    for(int i=1;i<=10;i++)
    {
      printf("%d x %d= %d\n",num,i,(num*i));
    }
    return 0;
}

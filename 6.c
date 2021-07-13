#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if (num==1)
    {
        printf("your no is 1");
    }
    else if (num==2)
    {
        printf("your no is 2");
    }
    else if (num==3)
    {
        printf("your no is 3");
    }
    else
    {
        printf("your no is not 1,2 or 3");
    }
    return 0;
}

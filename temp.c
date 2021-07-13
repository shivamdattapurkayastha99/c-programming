#include<stdio.h>

int mypow(int n,int p)
{
    int power=1;
    for(int i=1;i<=p;i++)
    {
        power=power*n;
    }
    return power;
}
int main(int argc, char const *argv[])
{
    printf("%d",mypow(2,4));
    return 0;
}

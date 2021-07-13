#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr;
    int a,b,c;
    ptr=fopen("28.txt","r");
    fscanf(ptr,"%d%d%d",&a,&b,&c);
    printf("the values of a,b and c is %d,%d,%d",a,b,c);

    return 0;
}
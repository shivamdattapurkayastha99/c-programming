#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int ptr[10];
    printf("Enter the array\n");
    for(int i=0;i<10;i++)
    scanf("%d",&ptr[i]);
    if(*(ptr+2)==ptr[2])
    printf("yes\n");
    else
    printf("no\n");


    return 0;
}

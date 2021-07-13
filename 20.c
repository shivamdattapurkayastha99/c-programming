#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int a=5;
    int *p1;
    int **p2;

    p1=&a;
    p2=&p1;
    printf("The value of a is %d\n",**p2);    
    return 0;
}

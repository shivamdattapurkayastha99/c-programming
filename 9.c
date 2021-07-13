#include<stdio.h>
int main(int argc, char const *argv[])
{
    int marks;
    printf("Enter your marks\n");
    scanf("%d",&marks);
    if(marks>=90&&marks<=100)
    printf("A");
    else if(marks>=70&&marks<=90)
    printf("B");
    else if(marks>=60&&marks<=70)
    printf("C");
    else if(marks<=60)
    printf("D");
    return 0;
}

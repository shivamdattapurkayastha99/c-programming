#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int x=2;
    int y=3;
    printf("The value of 3*x-8*y is %d\n",3*x-8*y);
    printf("The value of 8*y/3*x is %d\n",8*y/3*x);
// 8*y/3*x=24/6 will give wrong answer
    printf("The value of 8*y/3*x is %d\n",(8*y)/(3*x));//this is correct
    // Multiplication and division follow left to right associativity
    
    return 0;
}

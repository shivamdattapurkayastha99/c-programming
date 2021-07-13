#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    float income,tax;
    printf("Enter your income\n");
    scanf("%f",&income);
    if(income>=250000&&income<=500000)
    tax=0.05*income;
    else if(income>=500000&&income<=1000000)
    tax=0.20*income;
    else if(income>=1000000)
    tax=0.30*income;
    else
    tax=0.0;
    printf("Your tax amount is %f",tax);

    return 0;
}

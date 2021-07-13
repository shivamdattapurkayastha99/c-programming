#include<stdio.h>
int main(int argc, char const *argv[])
{
    // printf("%f",3.0/8-2);
    printf("Enter your age\n");
    int age;
    scanf("%d",&age);
    if(age>=90||age<18)
    {
        printf("You cannot drive ");
    }
    else
    {
        printf("You can drive ");
    }
    return 0;
}

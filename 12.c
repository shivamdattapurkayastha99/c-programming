#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("Enter the year\n");
    int year;
    scanf("%d",&year);
    if(year%4==0&&year%400!=0)
    printf("Leap year\n");
    else
    printf("Not Leap year\n");

    return 0;
}

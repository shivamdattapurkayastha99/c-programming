#include<stdio.h>
#include<stdlib.h>
void SumandAvg(int a,int b,float *sum,float *avg)
{
     
    *sum=a+b;
    *avg=(a+b)/2;
    
}
int main(int argc, char const *argv[])
{
    int a,b;float sum,avg;
    printf("Enter the first no\n");
    scanf("%d",&a);
    printf("Enter the second no\n");
    scanf("%d",&b);
    SumandAvg(a,b,&sum,&avg);
    printf("Sum is %f\n Average is %f",sum,avg);

    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *p;
    int a;
    p=fopen("32.txt","w");
    fscanf(p,"%d",&a);
    int b=a*2;
    fprintf(p,"%d",b);



    return 0;
}

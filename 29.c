#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *ptr;
    int n;
    printf("Enter the number whose table you want\n");
    scanf("%d",&n);
    ptr=fopen("29.txt","w");
    for(int i=0;i<10;i++)
    fprintf(ptr,"%d x %d = %d\n",n,(i+1),n*(i+1));
    fclose(ptr);
    return 0;
}

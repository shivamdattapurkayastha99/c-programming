#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int *a=(int *)malloc(11*sizeof(int));
    for(int i=0;i<10;i++)
    {
        a[i]=i+1;
        printf("%d x %d = %d\n",5,a[i],5*a[i]);
    }
    return 0;
}

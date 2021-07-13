#include<stdlib.h>
#include<stdio.h>
struct vector
{
    int x;
    int y;
};
int main(int argc, char const *argv[])
{
    struct vector v1,v2,v3;
    printf("Enter x and y coordinates of first vector\n");
    scanf("%d%d",&v1.x,&v1.y);
    printf("Enter x and y coordinates of second vector\n");
    scanf("%d%d",&v2.x,&v2.y);
    v3.x=v1.x+v2.x;
    v3.y=v1.y+v2.y;
    printf("%d,%d",v3.x,v3.y);

    
    
    return 0;
}

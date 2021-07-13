#include<stdlib.h>
#include<stdio.h>
struct complex
{
    int x;
    int y;
};
int main(int argc, char const *argv[])
{
    struct complex v1,v2,v3;
    printf("Enter x and y coordinates of first vector\n");
    scanf("%d%d",&v1.x,&v1.y);
     printf("%d+%di",v1.x,v1.y);
    printf("Enter x and y coordinates of second vector\n");
    scanf("%d%d",&v2.x,&v2.y);
     printf("%d+%di",v2.x,v2.y);
    v3.x=v1.x+v2.x;
    v3.y=v1.y+v2.y;
    printf("%d+%di",v3.x,v3.y);

    
    
    return 0;
}

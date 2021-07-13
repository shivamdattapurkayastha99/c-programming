#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    char str[20];
    int i;
    printf("Enter the string\n");
    gets(str);
    for( i=0;str[i]!='\0';i++);
    printf("%d",i);

    return 0;
}

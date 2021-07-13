#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *ptr1;
    char name[20];
    int salary;
    printf("Enter the name\n");
    gets(name);
    printf("Enter the salary\n");
    scanf("%d",&salary);
    ptr1=fopen("31.txt","w");
    fprintf(ptr1,"%s,%d",name,salary);

    fclose(ptr1);
    
    return 0;
}

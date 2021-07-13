#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *ptr1,*ptr2;
    ptr1=fopen("30.txt","r");
    ptr2=fopen("30a.txt","w");
    char c=fgetc(ptr1);

    while(c!=EOF){
    fputc(c,ptr2);
    fputc(c,ptr2);
    c=fgetc(ptr1);
    
}
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}

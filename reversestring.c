#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
    char *str=(char *)malloc(20*sizeof(char));
    printf("Enter the string\n");
    gets(str);

   int len=0;char temp;
   while(str[len]!='\0')
   len++;
   printf("The length of the string is %d",len);
   for(int i=0;i<=(len-1)/2;i++)
   {
       temp=str[i];
       str[i]=str[len-1-i];
       str[len-1-i]=temp;


   }
   
    printf("%s",str);
    return 0;
}

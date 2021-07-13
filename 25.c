#include<stdio.h>
#include<stdlib.h>
void mystrcpy(char *str1,char *str2)
{
    int i;
    for(i=0;str1[i]!='\0';i++)
    str2[i]=str1[i];
    str2[i]='\0';

}
void encrypt(char *str1,char *str2)
{
    int i;
    for(i=0;str1[i]!='\0';i++)
    str2[i]=str1[i]+1;
    str2[i]='\0';

}
void decrypt(char *str1,char *str2)
{
    int i;
    for(i=0;str1[i]!='\0';i++)
    str2[i]=str1[i]-1;
    str2[i]='\0';

}
int main(int argc, char const *argv[])
{
   printf("Enter the string to be copied\n");
   char str1[10],str2[10];
   gets(str1);
   mystrcpy(str1,str2);
   printf("Copied string is %s",str2);
   encrypt(str1,str2);
   printf("Encrypted string is %s",str2);
   decrypt(str2,str1);
   printf("Decrypted string is %s",str1);
   
    return 0;
}

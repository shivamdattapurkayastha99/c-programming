#include<stdio.h>
#include<stdlib.h>
void slice(char *str,int m,int n)
{
    int i=0;
    while(m+i<n)
    {
        str[i]=str[i+m];
        i++;

    }
    str[i]='\0';
}
int main(int argc, char const *argv[])
{
    int m,n;
   printf("Enter the string\n");
   char *str=(char *)malloc(20*sizeof(char));
   gets(str);
   printf("Enter the starting index of the sliced string\n");
   scanf("%d",&m);
   printf("Enter the last index of the sliced string\n");
   scanf("%d",&n);
   slice(str,m,n);
   printf("%s",str);
    return 0;
}

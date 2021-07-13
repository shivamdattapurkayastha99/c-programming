#include<stdio.h>
#include<stdlib.h>
int main()
{
  float phy,chem,maths;
 float total;
 printf("Enter the marks in physics\n");
 scanf("%f",&phy);
 printf("Enter the marks in chemistry\n");
 scanf("%f",&chem);
 printf("Enter the marks in maths\n");
 scanf("%f",&maths);
 total=(phy+chem+maths)/3;
 if(total<40.0 || phy<33.3||chem<33.3||maths<33.3)
printf("fail\n");
else
printf("pass\n");  
      
  
    return 0;
}
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int areaofRectangle(int l,int b)
{
    int area=l*b;
    return area;
}
float volumeofCylinder(int r,int h)
{
    float areaofCircle=3.14*pow(r,2);
    float volume=areaofCircle*h;
    return volume;
}
float ctof(float c)
{
    float f=((9/5)*(c+32))/32;
    
    return f;
}
float si(float p,float r,int t)
{
    float si=(p*r*t)/100;
    
    return si;
}
int main()
{
    int ch,length,breadth,time;
    float radius,height,celsius,principal,rate,fahrenheit;
    while (1)
    {
    
   printf("Enter 1.areaofrectangle,2.volumeofCylinder,3.ctof,4.simpleinterest,5.to exit");
   
   printf("Enter your choice\n");
   scanf("%d",&ch);
   switch (ch)
   {
   case 1:
       
       printf("Enter the length of rectangle\n");
       scanf("%d",&length);
       printf("Enter the breadth of rectangle\n");
       scanf("%d",&breadth);
       int area=areaofRectangle(length,breadth);
       printf("Area of rectangle is %d",area);


       break;
    case 2:
       
       printf("Enter the radius of cylinder\n");
       scanf("%f",&radius);
       printf("Enter the height of cylinder\n");
       scanf("%f",&height);
       float volume=volumeofCylinder(radius,height);
       printf("Volume of cylinder is %f",volume);


       break;
    case 3:
       
       printf("Enter the celsius temperature\n");
       scanf("%f",&celsius);
       
        fahrenheit=ctof(celsius);
       printf("Fahrenheit temperature is %f",fahrenheit);


       break;
    case 4:
       
       printf("Enter the principal\n");
       scanf("%f",&principal);
       printf("Enter the rate of interest\n");
       scanf("%f",&rate);
       printf("Enter the time\n");
       scanf("%d",&time);
       
       printf("Simple Interest is %f",si(principal,rate,time));


       break;
   
   default:
       exit(0);
       break;
   }
   }
    return 0;
}

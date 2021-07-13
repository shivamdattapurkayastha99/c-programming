#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int swh(char you,char comp)
{
    if(you==comp)
    {
        return 0;
    }
    if(you=='s'&&comp=='w')
    return 1;
    else if(you=='w'&&comp=='s')
    return -1;
    
    if(you=='s'&&comp=='g')
    return -1;
    else if(you=='g'&&comp=='s')
    return 1;
    
    if(you=='w'&&comp=='g')
    return 1;
    else if(you=='g'&&comp=='w')
    return -1;
    
     
    
    
   
    
}


int main(int argc, char const *argv[])
{
   srand(time(0));
   int number=rand()%100+1;
   
    char you,comp;
    if(number<33)
    comp='s';
    else if(number>33&&number<66)
    comp='w';
    else
    comp='g';
    printf("Enter s->snake,w->water,g->gun\n");
    scanf("%c",&you);
    int result=swh(you,comp);
    if(result==0)
    printf("Draw\n");
    else if(result==1)
    printf("Win\n");
    else
    printf("Lose\n");
    printf("you chose %c and computer chose %c",you,comp);
    return 0;
}

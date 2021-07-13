#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc, char const *argv[])
{
   int number,guess,nguesses=1;
   srand(time(0));
   number=rand()%10+1;//generates a random no between 1 to 10
//    printf("The random number generated is %d",number); 
   do{
       printf("Guess a number between 1 to 10 in atmost 5 attempts \n");
       scanf("%d",&guess);
       if(guess>number)
       printf("Guess a lower number\n");
       else if(guess<number)
       printf("Guess a higher number\n");
       else
       printf("You guessed the number in %d attempts\n",nguesses);
       nguesses++;
   }while(number!=guess&&nguesses<6);
    return 0;
}

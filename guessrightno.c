#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num,guess,nguesses=1;
    srand(time(0));  //gives random no everytime
    num=rand()%100 + 1;//GENERATES RANDOM NO BW 1TO100 ONLY i.e 100+1=101 b t gives buy -1 i.e=100
    //printf("THE NUMBER IS %d\n", num);
    //KEEP RUNNING THE LOOP UNTIL THE NO IS GUESSED
    do{
          printf("Guess The Number Between 1 TO 100\n ");
          scanf("%d", &guess);
          if(guess>num){
              printf("CHOOSE SMALLER NUMBER PLEASE !\n ");
          }
          else if(guess<num){
              printf("CHOOSE GREATER NUMBER PLEASE !\n ");
          }
          else
          {
              printf("YOU GUESSED IT IN %d ATTEMPTS",nguesses);
          }
           nguesses++;
    }while(guess!=num);
    return 0;


}

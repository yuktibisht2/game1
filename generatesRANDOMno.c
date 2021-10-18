#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num;
    srand(time(0));  //gives random no if we'll not use it it'll give same no everytime
    num=rand()%100 + 10;//GENERATES RNDOM NO BW 1 TO109 ONLY i.e 100+10=110 but gives by -1
    printf("THE NUMBER IS %d", num);
    return 0;


}

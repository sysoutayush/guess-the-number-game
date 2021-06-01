#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
    int number,guess,nguess=0;
    srand(time(0));
    number=rand()%100+1;
   // printf("The number is %d",number);
    do
    {
        printf("Guess the no between 1 to 100");
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("Lower no please \n");
        }
        else if (guess>number)
        {
            printf("Higer no please\n");
        }
        else{
            printf("you guess in %d attempts \n",nguess);
        }
        nguess ++;
    } while (guess!=number);
    
    return 0;
}
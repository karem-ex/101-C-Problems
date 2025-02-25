/*
    Question 14: Guess the number the computer picked.
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

short flag = 1;
short guess_num;
short okey_or_continue;
void main(){

    while (flag>0)
    {
        srand(time(0));
        int random_num = rand() % 10;
        printf("Enter a number please: ");
        scanf("%d",&guess_num);

        if (random_num == guess_num)
        {
            printf("Congratulations, you guessed it right. %d\n", random_num);
            continue;
        }
        else{
            printf("Enter Exit(0) or Continue (1): ");
            scanf("%d", &flag);
        }
        
    }
    

}



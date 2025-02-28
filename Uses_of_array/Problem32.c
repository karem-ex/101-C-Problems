/*
Question 32: Find which of the integers in the series is greater.

*/

#include <stdio.h>

int numbers[7] = {-75,42,65,99,-100,85,100};

int i,max = 0;

void main()
{
    for(i = 0; i < 7; i++){

        if(numbers[i] > max){

            max = numbers[i];
        }
    }
    printf("Largest Number: %d",max);

}
/*
Question 31: Take an array of integner data type of size 10. Get input from user and store the values in the array and finally print the sum
of those 10 intergners.

*/

#include <stdio.h>

int number[10];
int i,sum = 0;

void main(){

    for (i = 0; i < 10; i++)
    {   
        printf("Enter %d\'th number: ",i+1);
        scanf("%d",&number[i]);
        sum = sum + number[i];
    }
    printf("Sum: %d",sum);
  


}

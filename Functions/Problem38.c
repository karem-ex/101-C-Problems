/*
Question 38: Program that finds the square of a number given by the user.

*/

#include <stdio.h>

float square_num;

float square_calculate(float num){

    float total;

    total = (num * num);
    return total;

}



int main(){

    printf("Enter a number: ");
    scanf("%f",&square_num);
    printf("Square of %0.2f: ", square_calculate(square_num));

    return 0;
}
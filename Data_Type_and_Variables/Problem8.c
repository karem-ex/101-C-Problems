/*
Question 8: Take four double variables. And calculate their averages.
*/

#include <stdio.h>

double a,b,c,d,avg;

int main(){

    a = 10;
    b = 20;
    c = 30;
    d = 39.9;
    avg = (a+b+c+d) / 4;
    printf("Average: %.2lf",avg);

    return 0;
}
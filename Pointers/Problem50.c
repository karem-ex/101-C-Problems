/*
Question 50: Pointers of Array

*/

#include <stdio.h>


void main(){

    int a[] = {5,10,15,20,250};
    
    int *pA;

    pA = &a[2];

    printf("The Array: %d\n",*pA);

    printf("Value of the array: %d",*(pA+2));
}
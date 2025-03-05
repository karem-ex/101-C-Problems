/*

Question 49: Take two pointer variables of integner type named pX and pY. Now take another two variables of integner data type named X and Y. 
Assing X = 100 and Y = 200. Assign the address of X to pX and address of Y to pY. Now print the values of X and Y using pX and pY.
*/

#include <stdio.h>

int *pX, *pY; // Pointer variables for X and Y
int X, Y;     // Integer variables X and Y

int main()
{
    // Assign values to X and Y
    X = 100;
    Y = 200;

    // Assign the addresses of X and Y to pX and pY
    pX = &X;
    pY = &Y;

    // Print the values of X and Y using pX and pY
    printf("Value of X using pX: %d\n", *pX);
    printf("Value of Y using pY: %d\n", *pY);

    return 0;
}

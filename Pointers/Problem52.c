/*
Question 52: Pointer to Pointer
*/

#include <stdio.h>

int main()
{
    int a = 5;
    int *pA;
    int **ppA;

    pA = &a;   // pA holds the address of a
    ppA = &pA; // ppA holds the address of pA

    // We reach the value of a with Pointer to Pointer
    printf("a\'nin degeri: %d\n", **ppA); // **ppA and a's value can be accessed

    return 0;
}

/*
Question 51: Pointer and Function
*/

#include <stdio.h>

void changeValue(int *ptr)
{
    *ptr = 100; 
}

int main()
{
    int z = 30;
    printf("First Value: %d\n", z);

    changeValue(&z);

    printf("Modified Value: %d\n", z);

    return 0;
}

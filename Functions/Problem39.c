/*
Question 39: Function that prints a string to the screen.

*/

#include <stdio.h>

void print_(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    print_(arr, 5);
    return 0;
}

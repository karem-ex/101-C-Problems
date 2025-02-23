/*
Question 4: Write a program to print the following output:
                *
               ***
              *****
             *******
            *********
*/
#include <stdio.h>

int main()
{
    int n, i, j;

    // Ask the user to input the number of rows for half of the diamond
    printf("Enter the number of rows for half of the diamond: ");
    scanf("%d", &n);

    // Upper half of the diamond (including the middle row)
    for (i = 1; i <= n; i++)
    {
        // Print leading spaces
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}

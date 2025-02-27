/*

Question 29: Write a C program to find the 'Perfect' numbers within a given number of ranges.

*/


#include <stdio.h>
#include <stdbool.h>
/*
min and max: will hold the starting and ending range received from the user.
n: will hold the number to be checked.
i: will check the number of divisors.
sum: will hold the sum of divisors to calculate perfect numbers.
*/
int main()
{
    int min, max, n, i, sum;
    bool first = true;


    printf("Enter the starting range or number: ");
    scanf("%d", &min);
    printf("Enter the ending range or number: ");
    scanf("%d", &max);

    printf("The perfect numbers within the given range: ");

    
    for (n = min; n < max; n++)
    {
        sum = 0;

        
        for (i = 1; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }

        
        if (sum == n)
        {
            if (!first)
            {
                printf("--");
            }
            printf("%d", n);
            first = false;
        }
    }

    if (first)
    {
        printf("None");
    }

    printf("\n");
    return 0;
}

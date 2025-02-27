/*

Question 27: Printing odd numbers from 0 to 100.

*/

#include <stdio.h>

int flag = 0;

void main()
{
    do
    {
        for (flag = 0; flag <= 100; flag++)
        {
            if (flag % 2 == 0)
            {
                continue;
            }
            else
            {
                printf("Odd Number: %d\n", flag);
            }
        }

    } while (flag <= 100);
}
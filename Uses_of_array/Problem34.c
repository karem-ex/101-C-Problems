/*
Question 34: Sorting array elements from smallest to largest.

*/

#include <stdio.h>

int main()
{
    int sayilar[] = {50, 40, 20, 10, 30};
    int boyut = sizeof(sayilar) / sizeof(sayilar[0]);
    int temp;

    for (int i = 0; i < boyut - 1; i++)
    {
        for (int j = 0; j < boyut - i - 1; j++)
        {
            if (sayilar[j] > sayilar[j + 1])
            {
                temp = sayilar[j];
                sayilar[j] = sayilar[j + 1];
                sayilar[j + 1] = temp;
            }
        }
    }

    printf("Ordered Array: : ");
    for (int i = 0; i < boyut; i++)
    {
        printf("%d ", sayilar[i]);
    }

    printf("\n");

    return 0;
}

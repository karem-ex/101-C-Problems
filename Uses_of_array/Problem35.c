/*
Question 35: Finding Even Numbers and Transferring Them to a New Array.


*/

#include <stdio.h>

int main()
{
    int sayilar[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int boyut = sizeof(sayilar) / sizeof(sayilar[0]);
    int çiftler[boyut];
    int sayac = 0;

    for (int i = 0; i < boyut; i++)
    {
        if (sayilar[i] % 2 == 0)
        {
            çiftler[sayac] = sayilar[i];
            sayac++;
        }
    }


    printf("Even Numbers: ");
    for (int i = 0; i < sayac; i++)
    {
        printf("%d ", çiftler[i]);
    }

    printf("\n");

    return 0;
}

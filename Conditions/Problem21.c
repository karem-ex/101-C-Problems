/*
Question 21: A program that displays whether the entered number is positive, negative, or zero.

*/
#include <stdio.h>

int main()
{
    int num;

    printf("Bir sayi girin: ");
    scanf("%d", &num);

    (num > 0) ? printf("Pozitif\n") : (num < 0) ? printf("Negatif\n")
                                                : printf("Sıfır\n");

    return 0;
}

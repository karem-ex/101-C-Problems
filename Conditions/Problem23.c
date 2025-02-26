/*
Question 23: We make clothing recommendations according to the temperature..

*/
#include <stdio.h>

int main()
{
    float temperature;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temperature);

    if (temperature < 0)
    {
        printf("It's freezing! Wear a heavy coat and gloves.\n");
    }
    else if (temperature >= 0 && temperature < 10)
    {
        printf("It's cold! Wear a coat.\n");
    }
    else if (temperature >= 10 && temperature < 20)
    {
        printf("It's cool! A light jacket would be enough.\n");
    }
    else if (temperature >= 20 && temperature < 30)
    {
        printf("It's warm! Wear a t-shirt.\n");
    }
    else
    {
        printf("It's hot! Wear light clothes and stay hydrated.\n");
    }

    return 0;
}

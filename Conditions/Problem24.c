/*
Question 24: calculating machine

*/
#include <stdio.h>

int main()
{
    float num1, num2, result;
    char operator;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator); // Boşluk karakteri önceki satırdaki '\n' karakterini temizler

    printf("Enter the second number: ");
    scanf("%f", &num2);

    if (operator== '+')
    {
        result = num1 + num2;
    }
    else if (operator== '-')
    {
        result = num1 - num2;
    }
    else if (operator== '*')
    {
        result = num1 * num2;
    }
    else if (operator== '/')
    {
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            printf("Error! Division by zero.\n");
            return 1; // Hata durumu
        }
    }
    else
    {
        printf("Invalid operator.\n");
        return 1; // Hatalı giriş
    }

    printf("The result is: %.2f\n", result);
    return 0;
}

/*


*/

#include <stdio.h>

float total,fnumber,snumber;
char option;


float sum(float num1, float num2){

    total = num1 + num2;

    return total;
}
float divide(float num1, float num2)
{
    total = num1 / num2;
    return total;
}
float multiplication(float num1, float num2)
{
    total = num1 * num2;
    return total;
}
float subtraction(float num1, float num2)
{
    total = num1 - num2;
    return total;
}

int main()
{
    printf("WELCOME to Calculator Machine:\n");

    printf("Choose options: (+,-,*,/): ");
    scanf("%c",&option);
    if (option == '+')
    {
        printf("Enter first number: ");
        scanf("%f", &fnumber);
        printf("Enter second number: ");
        scanf("%f", &snumber);
        printf("%0.2f + %0.2f: %0.2f", fnumber, snumber, sum(fnumber, snumber));
    }
    else if (option == '-')
    {
        printf("Enter first number: ");
        scanf("%f", &fnumber);
        printf("Enter second number: ");
        scanf("%f", &snumber);
        printf("%0.2f - %0.2f: %0.2f",fnumber,snumber,subtraction(fnumber, snumber));
    }
    else if (option == '/')
    {
        printf("Enter first number: ");
        scanf("%f", &fnumber);
        printf("Enter second number: ");
        scanf("%f", &snumber);
        printf("%0.2f / %0.2f: %0.2f",fnumber,snumber,divide(fnumber, snumber));
    }
    else if (option == '*')
    {
        printf("Enter first number: ");
        scanf("%f", &fnumber);
        printf("Enter second number: ");
        scanf("%f", &snumber);
        printf("%0.2f * %0.2f: %0.2f",fnumber,snumber,multiplication(fnumber, snumber));
    }

    return total;
}
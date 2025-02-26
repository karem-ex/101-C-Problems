/*
Question 22: We check if a number is valid from the user. If it is not a valid entry, we print an error message.

*/
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input. Please enter a valid integer.\n");
    }
    else
    {
        printf("You entered: %d\n", num);
    }

    return 0;
}

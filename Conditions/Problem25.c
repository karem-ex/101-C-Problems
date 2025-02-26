/*
Question 25: We determine which season it is in by getting day and month information from the user.

*/
#include <stdio.h>

int main()
{
    int day, month;

    printf("Enter the day of the month: ");
    scanf("%d", &day);

    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    if (month >= 3 && month <= 5)
    {
        printf("It is Spring.\n");
    }
    else if (month >= 6 && month <= 8)
    {
        printf("It is Summer.\n");
    }
    else if (month >= 9 && month <= 11)
    {
        printf("It is Fall.\n");
    }
    else
    {
        printf("It is Winter.\n");
    }

    return 0;
}

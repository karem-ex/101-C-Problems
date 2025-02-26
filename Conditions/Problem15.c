/*
Question 15: Take password (4-digit) than account. (Bank ATM)
*/
#include <stdio.h>
int accounts_password;
int default_password = 1234;
void check_system_ATM(int pass)
{

    if (pass == default_password)
    {
        printf("Welcome Bank ATM of X");
    }
    else
    {
        printf("Warning!!! Wrong Password.\nSystem shut down !!!!");
    }
}

void main()
{

    printf("Enter a 4-digit Password: ");
    scanf("%d", &accounts_password);
    check_system_ATM(accounts_password);
}

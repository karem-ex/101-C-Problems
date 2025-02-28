/*
Question 33: Get username and password from user.

*/

#include <stdio.h>

char username[20];
int password_[6];

void main()
{

    printf("Enter your username: ");
    scanf("%s",&username);
    printf("Enter your password: ");
    scanf("%d", &password_);

    printf("Welcome %s",username);
}
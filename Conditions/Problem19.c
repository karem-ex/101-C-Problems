/*
Question 19: Get 3 numbers from user and find which one is bigger
*/
#include <stdio.h>

int num1,num2,num3;

int main()
{
    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    printf("Enter Thirth Number: ");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3){
        printf("The largest number: %d",num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("The largest number: %d", num2);
    }
    else{
        printf("The largest number: %d", num3);
    }

    return 0;
}
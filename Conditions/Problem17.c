/*

Question 17: Write a program which determines whether a number is ODD or EVEN.

*/

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number please: ");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("%d is EVEN.",num);
    }
    else{
        printf("%d is ODD.", num);
    }


    return 0;
}
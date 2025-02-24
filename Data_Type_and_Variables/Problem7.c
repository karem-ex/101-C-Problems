/*
Question 7: Write a program to print the following output:
            Ascii value of 'A' is : ____
            Ascii value of '@' is : ____
            In the blank space you should show the ascii code of the given characters.
*/
#include <stdio.h>

char ch;
short flag = 1;

int main(){

    while (flag > 0)
    {
        printf("Enter a character please: ");
        scanf(" %c", &ch);
        printf("Ascii value of '%c' is : %d", ch, ch);
        printf("\n");
    }


    return 0;
}




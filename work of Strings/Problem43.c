/*
Question 43: Find the length of a given string.
*/

#include <stdio.h>
#include <string.h>

char str_[100];

int lenght = 0;
void main(){

    printf("Enter your word: ");

    fgets(str_,sizeof(str_),stdin);

    while (str_[lenght] != '\0')
    {
        lenght++;
    }

    if (str_[lenght - 1] == '\n')
    {
        lenght--;
    }

    printf("Length of word: %d",lenght);
    

}
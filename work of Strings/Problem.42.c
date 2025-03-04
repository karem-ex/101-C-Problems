/*
Question 42: Take a word from user and print the word in reverse order.

*/
#include <stdio.h>
#include <string.h>

char word[20];
int length, i;

void main()
{

    printf("Enter your word: ");
    scanf("%s", &word);
    length = strlen(word);

    for (i = length; i >= 0; i--)
    {
        printf("%c", word[i]);
    }
    printf("\n");
}

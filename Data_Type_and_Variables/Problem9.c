/*
Question 9: Print ascii value of entered word.
*/
#include <stdio.h>
#include <string.h>

char word[] = "";

int main(){

    printf("Enter a word please: ");
    scanf("%s",&word);
    for (int i = 0; i < strlen(word); i++)
    {
        printf("%c-%d\n",word[i],word[i]);
    }

    return 0;
}
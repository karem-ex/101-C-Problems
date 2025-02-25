/*
    Question 13: Print in the terminal your name and surname.
*/
#include <stdio.h>


void main(){


    char name[20];
    char surname[20];

    printf("Enter your name and surname: ");
    scanf("%s %s",&name,&surname);

    printf("Name: %s\nSurnmae: %s",name,surname);

}

/*
Question 47: Write a program in C to convert a string to uppercase.

*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    int ctr = 0;   
    char str_char; 
    char str[100]; 

    printf("\n Convert a string to uppercase. :\n");
    printf("-----------------------------------");
    printf("\n Input a string in lowercase : ");
    fgets(str, sizeof str, stdin); 

    printf(" Here is the above string in UPPERCASE :\n ");

    while (str[ctr])
    {                               
        str_char = str[ctr];        
        putchar(toupper(str_char)); 
        ctr++;                      
    }

    printf("\n\n");
    return 0; 
}

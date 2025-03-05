/*

Question 53: String Manipulation with pointer.

*/

#include <stdio.h>
void main()
{
    char str[] = "Hello World!";
    char *ptr = str;
    
    printf("%c", *ptr);// H
    printf("%c", *(ptr + 1));// e
    printf("%c", *(ptr + 2));// l
    printf("%c", *(ptr + 3));// l
    printf("%c", *(ptr + 4));// o
}
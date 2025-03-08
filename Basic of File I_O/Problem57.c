/*
Question 56: Reading to a file.

Basic Concepts of File I/O in C

    --File Pointer: To perform any operation on a file, you need a pointer of type FILE.
        This pointer is used to refer to a file during operations.
    --Opening a File: Before reading or writing to a file, you must open it using fopen().

    --Reading and Writing to a File: After opening a file, you can read or write using standard I/O functions.

    --Closing a File: Always close a file after completing the operations using fclose() to free up resources.
*/

#include <stdio.h>

int main()
{
    FILE *file = fopen("firstFile.txt", "r"); // Open file in read mode

    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) // Read character by character until EOF
    {                
        putchar(ch); // Print the character
    }

    fclose(file); // Close the file

    return 0;
}

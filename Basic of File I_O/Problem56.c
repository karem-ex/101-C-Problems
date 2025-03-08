/*
Question 56: Writing to a file.

Basic Concepts of File I/O in C

    --File Pointer: To perform any operation on a file, you need a pointer of type FILE. 
        This pointer is used to refer to a file during operations.
    --Opening a File: Before reading or writing to a file, you must open it using fopen().

    --Reading and Writing to a File: After opening a file, you can read or write using standard I/O functions.

    --Closing a File: Always close a file after completing the operations using fclose() to free up resources.
*/

#include <stdio.h>


void main(){

    FILE *my_file = fopen("firstFile.txt","w"); //open file in Write mode

    if (my_file == NULL)
    {
        printf("Error opening file.\n");
    }

    fprintf(my_file,"Selamin Aleykum"); // Write formatted text to the file
    fclose(my_file);
    
    printf("File Written Successfly.");
    

}



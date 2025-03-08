/*
Question 59: Error Handling in File I/O

    Use ferror() to detect errors.
    After performing file operations, you can check for end-of-file using feof().
*/

#include <stdio.h>

int main()
{
    FILE *file = fopen("firstFile.txt", "r");

    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF)
    {
        if (ferror(file))
        {
            printf("Error reading from file.\n");
            fclose(file);
            return 1;
        }
        putchar(ch);
    }

    fclose(file);
    return 0;
}

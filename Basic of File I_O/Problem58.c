#include <stdio.h>

int main()
{
    FILE *file = fopen("firstFile.txt", "a"); // Open file in append mode

    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(file, "\nThis is an appended line.\n"); // Write to the end of the file
    fclose(file);                                 // Close the file

    return 0;
}

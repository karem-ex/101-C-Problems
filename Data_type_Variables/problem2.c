#include <stdio.h>

int ascii_val;
int flag = 0;

void run()
{
    while (flag == 0) // Run until 'flag' is set to 1
    {
        // Take a character input from the user
        printf("Please enter a character: ");
        scanf(" %c", &ascii_val); // Add a space before %c to skip any leading whitespace

        if (ascii_val == 'q') // Compare with single quote 'q' (not double quotes)
        {
            flag = 1; // Set flag to 1 to exit the loop
        }
        else
        {
            // Print the ASCII value of the character
            printf("ASCII value of '%c' character: %d\n", ascii_val, ascii_val);
        }
    }
}

int main()
{
    run(); // Call the run function to start the program
    return 0;
}

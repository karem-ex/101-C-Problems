/*

Question 28: A program that takes the integer N as input from the user and prints the Fibonacci value up to N on the screen.
*/

#include <stdio.h>

void fibonacci(int n)
{
    int first = 0, second = 1, next;

    printf("Fibonacci Sequence: ");

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%d ", first);
            continue;
        }
        if (i == 1)
        {
            printf("%d ", second);
            continue;
        }

        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    printf("\n");
}

int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}

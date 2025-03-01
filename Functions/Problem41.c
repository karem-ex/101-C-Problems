/*
Question 41: Calculate factoriel.
*/

#include <stdio.h>

int num;

int factoriel(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factoriel(n - 1);
}

int main()
{
    printf("Enter a number: ");
    scanf("%d",&num);
    int total = factoriel(num);
    printf("factoriel of %d: %d\n",num, total);
    return 0;
}

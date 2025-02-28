/*


*/

#include <stdio.h>

int main()
{
    int numbers[] = {10, 20, 5, 8, 30};
    int boyut = sizeof(numbers) / sizeof(numbers[0]);
    int min = numbers[0];
    int max = numbers[0];

    for (int i = 1; i < boyut; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    printf("The min number: %d\n", min);
    printf("The max number: %d\n", max);

    return 0;
}

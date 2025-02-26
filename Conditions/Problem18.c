/*

Question 18: Print the numbers from 0 to 100 that are divisible by 3 and 5.

*/

#include <stdio.h>

int main()
{

    for (int i = 0; i < 101; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d is divisible by both 3 and 5\n", i);
        }
        else{
            continue;
        }
    }
    
    

    return 0;
}
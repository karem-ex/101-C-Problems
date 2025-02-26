/*
Question 20: Asking the user to print a day of the week on the screen with a number.

*/
#include <stdio.h>
#include <stdbool.h> // bool veri tipi için

short num_of_day;

int main()
{
    bool t = true;

    while (t)
    {
        printf("Enter a number of day (from 1 to 7): ");
        if (scanf("%hd", &num_of_day) != 1)
        { // Sayıyı alırken hata kontrolü
            printf("Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n')
                ;     // Geçersiz girişleri temizle
            continue; // Hatalı giriş varsa tekrar iste
        }

        // Sayı 1-7 arasında mı kontrol et
        if (num_of_day < 1 || num_of_day > 7)
        {
            printf("Please enter numbers from 1 to 7. Do not enter letters or special characters.\n");
        }
        else
        {
            switch (num_of_day)
            {
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break;
            case 7:
                printf("Sunday\n");
                break;
            }
        }
    }

    return 0;
}

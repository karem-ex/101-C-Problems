/*
Question 10: Vize and Final calculate. (If the average is below the average, a make-up exam is required.)

*/
#include <stdio.h>

double vize , final , but, avg;

void calculate_note(){

    printf("Enter your vize note: ");
    scanf("%lf",&vize);
    printf("Enter your final note: ");
    scanf("%lf", &final);
    avg = (vize * 0.4) + (final * 0.6);
    if(avg >= 60){
        printf("Congratulations, you passed.\n");
        printf("Your avg: %0.2lf",avg);
    }
    else{
        printf("You failed\n");
        printf("Please enter your but note:");
        scanf("%lf",&but);
        avg = (vize * 0.4) + (but * 0.6);
        if (avg >= 60)
        {
            printf("Congratulations, you passed.\n");
            printf("Your avg: %0.2lf", avg);
        }
        else{
            printf("You failed...");
        }
    }
}


void main(){

    calculate_note();
}


/*

Question 16: University general field average (GPA) erasmus pass or fail condition statement

*/

#include <stdio.h>


int main(){


    float gpa;
    printf("Enter your GPA (2.00 - 4.00): ");
    scanf("%f",&gpa);

    if (gpa >= 2.75)
    {
        printf("You are eligible to go on Erasmus.");
    }
    else{
        printf("You are not eligible to go to Erasmus.");
    }
    
    return 0;

}
// Question 11: Calculate area of circle

#include <stdio.h>

float pi = 3.1416, r, area;
float sonuc;

float area_of_circle(){

    printf("Enter a r: ");
    scanf("%f",&r);
    area = pi * (r*r);

    return area;
}

int main(){

    sonuc=area_of_circle();
    printf("%0.2f",sonuc);
    return 0; 
}
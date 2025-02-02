#include <stdio.h>

const float pi = 3.14159; // More accurate value of pi
float r, area;            // radius

int main()
{
    // Take radius as input from the user
    printf("Enter the radius value: ");
    scanf("%f", &r);

    // Calculate the area using the formula: Area = π * r^2
    area = pi * (r * r);

    // Print the area of the circle with 2 decimal places
    printf("Area of the circle: %.2f\n", area);

    return 0;
}

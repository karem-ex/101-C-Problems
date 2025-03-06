/*
Question 54: "Structure" data structures

A structure is used to hold multiple types of data together. 
Each element in the structure can be a different data type (for example, int, float, char).
Each element in the structure has its own separate area in memory.

--------------------------------------------

Structure Properties:

Each element occupies a separate place in its own memory.
The size of each element in the structure in memory depends on the data type of that element.
Structure elements are accessed with the . operator.


*/
#include <stdio.h>
#include <string.h>


// Create a Structure
struct Person
{
    char name[15];
    int age;
    float height;
};




void main(){

    struct Person ali; // Creating a variable from the structure

    // Assign values ​​to variables
    ali.age = 20;
    ali.height = 1.75;
    strcpy(ali.name, "Ali");

    // Accessing structure elements
    printf("Name: %s\n",ali.name);
    printf("Age: %d\n",ali.age);
    printf("Height: %0.2f",ali.height);
}

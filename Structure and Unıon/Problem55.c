/*
Question 55: "Union" data structures

A union is used to store multiple types of data in the same memory space.
That is, all the elements in the union share the same memory space. Therefore, the union can only hold the value of one element.
Each element in a union uses the same memory address, so only one element should be active.

------------------------------------

Features of Union:

All elements in a union share the same memory space.
Therefore, a union can only hold the value of one element.
Union elements are accessed with the . operator.
When a union is used, the space in the memory is determined by the size of the largest element (for example, in the example above, int and float may have different sizes, the size of the union will be the size of the largest element).




When to Use?

Structure: Used when we need to keep multiple data (different types of data) at the same time. 
For example, if we want to keep information such as a person's name, age and height at the same time, we use struct.

Union: Used when we need to keep multiple different types of data in order, sharing the same memory space. Used to save memory.

*/
#include <stdio.h>

union data1
{
    int i;
    float f;
    char c;
};

int main()
{
    union data1 veri1; // Birlikten bir değişken oluşturuluyor

    veri1.i = 42; // int tipi kullanılıyor
    printf("Veri (int): %d\n", veri1.i);

    veri1.f = 3.14; // float tipi kullanılıyor
    printf("Veri (float): %.2f\n", veri1.f);

    veri1.c = 'A'; // char tipi kullanılıyor
    printf("Veri (char): %c\n", veri1.c);

    return 0;
}

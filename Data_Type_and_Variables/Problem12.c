/*
Question 12: Pre-increment and Post-increment means
*/

#include <stdio.h>

int i,j;

int main(){
    i = 0;
    j = 0; 

    j = i++ + ++i; // (0 (i++) default value 0, and next 1) + (2 (++i) default value 1, and next 2) --> 0 (i++) + 2 (++i)
    
    
    printf("i: %d j: %d",i,j); // --> i = 2 and j = 2
    return 0;
}
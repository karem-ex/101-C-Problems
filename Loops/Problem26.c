/*

Question 26: A program that asks the user to write the numbers of the multiplication table.

*/

#include <stdio.h>

void multiplication_calculate(int multiplication_number){

    int total;
    for(int i = 1; i<=10; i++){

        total = i * multiplication_number;
        printf("%d x %d = %d\n",multiplication_number,i,total);

    }
}



void main(){

    int my_num;
    printf("Enter a Number of multiplication table: ");
    scanf("%d",&my_num);
    multiplication_calculate(my_num);


}

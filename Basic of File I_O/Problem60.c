/*

Question 60: Write texts in array.

*/



#include <stdio.h>

void main(){

    FILE *my_file = fopen("firstFile.txt","w");

    if (my_file == NULL)  
    {
        printf("Error Opening file\n");
    }

    
    char *names[4] = {"Mehmet","Huseyin","Hasan","Ali"};

    printf("%d",(sizeof(names) / sizeof(names[0])));

    
    for (int i = 0; i < (sizeof(names) / sizeof(names[0])); i++)
    {
        fprintf(my_file,"%s\n",names[i]);
    }

    fclose(my_file);
    
}
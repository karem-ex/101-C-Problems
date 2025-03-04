/*

Question 44: How to declaration String in c.

*/
#include <stdio.h>
char str1[] = {'a','l','i','\0'}; // array's string
char str2[] = "can"; // '\0' would automatically inserted at the end in this type of declaration.
char str3[5] = "burak";        // get fixed input
void main()
{
    printf("%s\n",str1);
    printf("%s\n", str2);
    printf("%s", str3);
}
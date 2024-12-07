#include <stdio.h>

int main()
{
    int var1 = 0;
    int *my_var;
    char var2 = 'G';
    char *my_char;


    my_var = &var1;
    my_char = &var2;


    printf("%p", my_var); // referencing / locating memory address
    //displaying the contents of var1 indirectly.
    printf("\n%d", *my_var); // dereferencing


    printf("\n%p", my_char); // referencing / locating memory address
    // displaying the contents of var2 indirectly.
    printf("\n%c", *my_char); // dereferencing

    return 0;
}
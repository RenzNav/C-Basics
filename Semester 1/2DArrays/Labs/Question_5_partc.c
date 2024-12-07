/*
    Program Description: Write a short program to declare an integer and a pointer. Make the pointer point to
    the integer. Input an integer value into the int variable. Using the dereference
    operator, output the contents of address stored in the pointer.
*/

#include <stdio.h>

int main()
{
    // initialising values
    int var = 5;
    int *ptr;
    int c = 6;


    printf("Enter an integer:\n");

    scanf("%d", &var);

    ptr = &var;

    printf("\nvar contains %d and the memory address is %p\n", var, &var);

    // using the dereference operator, output the contents of address stored in the pointer.
    printf("\nIn the pointer contains the memory address %p of var with a value of %d\n", ptr++, *ptr++);
    // when ptr is incremented the value does not change within the ptr however the memory address does change 
    

    return 0;
}
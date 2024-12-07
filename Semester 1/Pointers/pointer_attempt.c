// trying out to see how pointers work

#include <stdio.h>

int main()
{
    int var1 = 10;
    int *my_var1;


    my_var1 = &var1;

    printf("\nVar1 contains %d and its address location is %p\n\n", var1, &var1);

    printf("my_var1 contains the memory address of var1, which is %p", my_var1);

    printf("\n%d", *my_var1);

    return 0;
}
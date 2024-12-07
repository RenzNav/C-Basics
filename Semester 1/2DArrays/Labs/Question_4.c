// code - observing a code given to us and completing it

#include <stdio.h>

int main()
{
    int var1;
    int *ptr;


    var1 = 1;
    ptr = &var1;

    printf("the address of var1 is %p\n", &var1); // the %d should be %p

    printf("ptr contains %p\n", &ptr); /* there is a missing & and should be
    &ptr */

    printf("*ptr contains %d\n", *ptr); /* there is a missing * (indirection
    operator) and therefore should be *ptr */

    return 0;
}

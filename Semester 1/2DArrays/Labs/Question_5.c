// series of tasks in relation to pointers.

#include <stdio.h>

int main()
{
    int var1 = 0;
    int *ptr;

    // (a) trying to assign F176BA2 to ptr will not be allowed by the compiler.
    ptr = //F176BA2;

    // (b) when trying to print the contents of the address we use '%d' and '*'.
    // Nothing happens because the compiler is prohibiting me from running the code as F176BA2 is undefined.
    printf("%p", ptr);
}
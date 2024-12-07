// Program Description: Observing what is contained in arr[8] after the following changes have been made.

#include <stdio.h>

#define SIZE 10

int main()
{
    //initialise values
    int arr[SIZE] = {0};
    int i;

    
    //start for
    for (i = 0; i < SIZE; i++)
    {
        arr[i] = 9 - i;
    }
    //end for

    printf("\narr[8] is %d\n", arr[8]);


    //start for
    for (i = 0; i < SIZE; i++)
    {
        arr[i] = arr[ arr[i]];
    }
    //end for

    printf("\narr[8] is %d\n", arr[8]);
 
    return 0;
}
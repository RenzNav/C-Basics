// Program Description: Program swaps 1st and 2nd values and 3rd and 4th values.

#include <stdio.h>

#define SIZE 4

int main()
{
    //values initialised
    int number[SIZE] = {0};
    int i;
    int j;
    int k;
    int t = 0;

    printf("Please enter 4 digits:\n");

    //start for loop
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &number[i]); 
    }

    printf("Array contains...\n");

    for (j = 0; j < SIZE; j++) // start for loop
    {
        printf("%d\t", number[j]);
    } // end for loop

    //swap the values
    //1st and 2nd value
    t = number[0];
    number[0] = number[1];
    number[1] = t;
    
    //3rd and 4th value
    t = number[2];
    number[2] = number[3];
    number[3] = t;

    printf("\nAnd here it is after the altercations:\n");

    for (k = 0; k < SIZE; k++) // start for loop
    {
        printf("%d\t", number[k]);
    } // end for loop

    return 0;
}
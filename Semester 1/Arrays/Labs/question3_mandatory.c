// Program Description: Program prompts user for 5 integers then prints out the integers in reverse order

#include <stdio.h>

#define ORIGINAL 5
#define REVERSE 5

int main()
{
    int integer_1[ORIGINAL] = {0};
    int integer_2[REVERSE] = {0};
    int i;
    int j;


    printf("Enter 5 values into the array: \n");

    //set a for loop to fill in the array
    for  (i = 0; i < ORIGINAL; i++) // start for loop
    {
        scanf("%d", &integer_1[i]);
        integer_2[REVERSE-1-i] = integer_1[i]; // assigning each starting value in array 1 into the end value of array 2 
    } // end for loop


    for (j = 0; j < REVERSE; j++) // start for loop
    {
        printf("%d\t", integer_2[j]);
    } // end for loop
    
    return 0;
    
}

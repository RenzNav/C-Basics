// Program Description: Program prompts user for an inout into one array which is then copied into another array

#include <stdio.h>

#define SIZE 5

int main()
{
    // initialising values 
    int num1[SIZE] = {0};
    int num2[SIZE] = {0};
    int i;
    int j = 0;

    printf("\nPlease insert 5 integers:\n");

    //start for
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &num1[i]);
        num2[i] = num1[i]; //anything inserted into array 1 is inserted exactly into array 2

    }
    //end for

    //start for
    for (j = 0; j < SIZE; j++)
    {
        printf("\narray 2 contains %d", num2[j]); 
    }
    // end for
     
    return 0;
}
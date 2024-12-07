/*
    Program Description: Program reads arrays and finds the average of the values.

    Author: Clarence Navarro

    Date: 14th November 2023
*/

#include <stdio.h>

//defining array
#define SIZE 15

int main()
{
    //initialise values
    int user_input[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
    int i;


    printf("\nThe %d numbers contained in the array are...\n", SIZE);
    printf("\n(a)\n");

    //start for
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\n", user_input[i]);
    }
    //end for

    printf("\n(b)\n");


    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", user_input[i]);
    }
    //end for

    printf("\n(c)\n");


    for (i = SIZE -1; i > -1; i--)
    {
        printf("%d ", user_input[i]);
    }
    //end for

    return 0;
}

    
//prints out characters entered on screen

#include <stdio.h>

#define SIZE 5

int main()
{
    //initialising values
    char characters[SIZE] = {' '};
    int i;
    int j;


    printf("Enter 5 characters:\n");

    //start for
    for (i = 0; i < SIZE; i++)
    {
        characters[i] = getchar();
    }
    //end for

    printf("\nHere are your characters:\n");

    //start for
    for (j = 0; j < SIZE; j++)
    {
        printf("%c\t", characters[j]);
    }
    //end for
    
    return 0;
}
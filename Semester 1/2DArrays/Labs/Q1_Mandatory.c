/*
    Program Description: This program multiplies figures from two 2d arrays then stores the product of the two in a third array.

    Author: Clarence Navarro

    Date: 21st November 2023
*/


#include <stdio.h>

#define ROW 3
#define COL 4

int main()
{
    // initialise values
    int array1[ROW][COL] = {0};
    int array2[ROW][COL] = {0};
    int array3[ROW][COL] = {0}; // answers will be stored in this array3
    int i, j = 0;


    printf("\nEnter in values for array1 below:\n");

    // initialise values in array1
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            scanf("%d", &array1[i][j]);
        }
        
    }
    

printf("\nEnter in values for array2 below:\n");

    // initialise values in array2
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            scanf("%d", &array2[i][j]);
        }
        
    }


    //for loop to multiply the arrays
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            // multiplying the arrays and bringing the product into array3
            array3[i][j] = array1[i][j]*array2[i][j];
            printf("\nThe product of %d and %d which is elements array1[%d][%d] and array2[%d][%d] is %d\n", array1[i][j], array2[i][j], i, j, i, j, array3[i][j]);
        }
        
    }
    

    return 0;

}
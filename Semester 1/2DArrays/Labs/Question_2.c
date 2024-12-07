/*

    Complete the following program so that it computes the sum of all the elements in the array:

*/

#include <stdio.h>

#define ROW 4
#define COL 6

int main()
{
    int data[ROW][COL] = {{3, 2, 5, 7, 4, 2},
                    {1, 4, 4, 8, 13, 1},
                    {9, 1, 0, 2, 0, 0},
                    {0, 2, 6, 3, -1, -8}
                    };
    // declare the sum
    int i, j;
    int total = 0;

    //..

    // compute the sum
    for ( i=0; i < ROW; i++)
    {
        for ( j=0; j < COL; j++)
        {
            total = total + data[i][j];
        }
    }
    // display the sum
    printf("%d", total);

    /*
    Be very careful with the indexes of the arrays - remember, array_name[0][0] is the
    element of the 1st row and 1st column.
    */

   return 0;

}
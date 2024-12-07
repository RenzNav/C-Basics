// Program Description: Values entered by user, program finds the sum of the rows and columns separately and finds the highest number in the array.

#include <stdio.h>

#define ROW 3
#define COL 2

int main()
{
    // initialise values
    int array[ROW][COL] = {0};
    int i, j;
    int highest = 0;
    int sum = 0;
    int sum_row0 = 0;


    printf("\nEnter in values for each element in the array (Please enter %d numbers):\n", ROW*COL);

    //for loop to enter in values into the array.
    for (i = 0; i < ROW; i++)
    {
        
        for (j = 0; j < COL; j++)
        {
            scanf("%d", &array[i][j]);
        } // end for
        
    }
    // end for

    // for loop to equate the sum of the values of each row.
    for (i = 0; i < ROW; i++)
    {
        sum = 0;

        for (j = 0; j < COL; j++)
        {
            sum = sum + array[i][j];
        } // end for
        
        printf("The sum of row %d is %d\n", i, sum);
    }
    // end for


    // for loop to equate the sum of the values of each column.
    for (i = 0; i < COL; i++)
    {
        sum = 0;

        for (j = 0; j < ROW; j++)
        {
            sum = sum + array[i][j];
        } // end for
        
        printf("The sum of column %d is %d\n", i, sum);
    }
    // end for

    highest = array[0][0];

    // for loop to find highest number in the array
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            // finds the highest number in the array starting from array[0][0].
            if (array[i][j] > highest)
            {
                highest = array[i][j];
            }
            // end inner if
            
        }
        // end inner for
        
    }
    // end for
    
    printf("The highest number in the array is %d", highest);


    /*

    // Michael's solution to do it separately.
    // for loop to equate the sum of the values of each row.
    for (i = 0; i < ROW; i++)
    {
        sum = 0;

        for (j = 0; j < COL; j++)
        {
           if (i == 0)
           {
                sum_row0 = sum_row0 + array[i][j];
           }

           if (i == 1)
           {
                sum_row0 = sum_row0 + array[i][j];
           }

           if (i == 2)
           {
                sum_row0 = sum_row0 + array[i][j];
           }
           
        } // end for

        printf("The sum of row %d is %d\n", i, sum);
    }
    // end for
*/

    return 0;

}
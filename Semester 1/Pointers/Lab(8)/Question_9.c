// Program Description: Program searches for values within an array that are less than zero.

#include <stdio.h>

#define ROW 3
#define COL 4

int main()
{
    int user_input[ROW][COL] = {0};
    int below_zero = 0;
    int i, j;


    printf("Please enter 12 values:\n");

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            scanf("%d", &user_input[i][j]);
        } 
    }


    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (user_input[i][j] < 0)
            {
                below_zero = user_input[i][j];

                printf("\n%d is below 0.\n", below_zero);

                printf("This is located in row %d and column %d", i, j);
            }
        }
    }
    
    return 0;
}
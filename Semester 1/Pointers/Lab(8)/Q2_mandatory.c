/*
    Program Description: Program reads arrays and finds the average of the values.

    Author: Clarence Navarro

    Date: 14th November 2023
*/

#include <stdio.h>

//defining arrays
#define ROW 3
#define COL 2

int main()
{
    //initialise values
    int user_input[ROW][COL];
    int i, j;
    int lowest = 0;
    int highest = 0;
    int sum = 0;
    float average = 0;


    printf("\nPlease Enter %d integers below:\n", ROW*COL);

    //start for
    for (i = 0; i < ROW; i++)
    {
        //start inner for
        for (j = 0; j < COL; j++)
        {
            scanf("%d", &user_input[i][j]);

            sum = sum + user_input[i][j];
        }
        //end inner for
        
    }
    //end for

    //finding the highest and lowest number entered in the array
    highest = user_input[0][0];
    lowest = user_input[0][0];

    //finding the average
    average = (float)sum / (ROW*COL);

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            //finding highest number in array with if
            if (highest < user_input[i][j])
            {
                highest = user_input[i][j];
            }
            //end inner if

            //finding lowest number in array with if
            if (lowest > user_input[i][j])
            {
                lowest = user_input[i][j];
            }
            //end inner if     
        }
        
    } 
    

    printf("\nThe highest number in this array is %d and the lowest is %d.\nThe numbers contained in this array are...\n", highest, lowest);


    //start for
    for (i = 0; i < ROW; i++)
    {
        //start inner for
        for (j = 0; j < COL; j++)
        {
            printf("%d\t", user_input[i][j]);
        }
        //end inner for
        
    }
    //end for

    printf("\nThe sum of the values is %d and the average of the values of the %d integers is %.2f", sum, ROW*COL, average);
    

    return 0;
}
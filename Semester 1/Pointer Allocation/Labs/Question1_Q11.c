/*
    Program Description: Calculate and display the value of each element 

    Author: Clarence Navarro

    Date: 12th December 2023
*/

#include <stdio.h>

#define SIZE 5

int main()
{
    float litres[] = { 11.5, 11.21, 12.7, 12.6, 12.4 };
    float miles[] = { 471.5, 358.72, 495.3, 453.6, 421.6 };
    int mpl[SIZE] = { 0 }; // miles/l
    int i = 0;


    // for loop to find miles per litre
    for ( i = 0; i < SIZE; i++)
    {

        *(mpl + i) = *(miles + i) / *(litres + i); 

    }
    // end for
    

    printf("\n\nHere are the following elements in miles per litre:\n");

    // displays the results
    for (size_t i = 0; i < SIZE; i++)
    {
        
        if (i < SIZE - 1)
        {
            printf("%d, ", *(mpl + i));
        }

    }
    // end for


    return 0;

}
// end main
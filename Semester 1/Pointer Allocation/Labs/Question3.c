/*
    Program Description: Using a calloc() function to store 5 float numbers then storing
    these 5 float numbers into the memory block, then finally finding an displaying the average of these numbers.

    Author: Clarence Navarro

    Date: 12th December 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numbers = 5;
    int i = 0;
    float sum = 0;
    float average = 1;
    float *container = 0;
    float *container2 = 0;

    // finding the size of the memory block
    container = calloc(numbers, sizeof(float));

    // creating a second memory block for average
    container2 = calloc(average, sizeof(float));

    // prompt user for 5 float numbers.
    printf("\n\nPlease enter the %d float numbers required for this equation:\n", numbers);

    if (container == NULL)
    {

        printf("\nMemory failed to allocate.\n");

    }
    // end if 

    else
    {
        // for loop to enter the required numbers
        for (i = 0; i < numbers; i++)
        {

            scanf("%f", &*(container + i));
            sum = sum + *(container + i);

        }
        // end for

        printf("\nHere are your numbers:\n");

        for (i = 0; i < numbers; i++)
        {

            if (i < numbers - 1)
            {

                printf("%.2f, ", *(container + i));

            }
            // end if

            else
            {

                printf("%.2f", *(container + i));

            }
            // end else
            
        }
        // end for
        
        *container2 = sum / numbers;

        printf("\n\nThe average of these numbers entered is %f\n", average);

        free(container);
        
    }
    // end else
 

    return 0;

}
// end main
/*

    Scenario:  You're developing a program for a weather monitoring system. The system collects
    temperature readings every hour. At the start of the day, you don't know how many readings 
    there will be since it depends on the duration of the monitoring.

    Author: Clarence Navarro

    Date: 4th December, 2023

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    // assigning values to the variables
    int hours = 0;
    int i = 0;
    int single_hour = 100;
    int time = 1200;
    int *readings = 0;


    // prompting worker for the hours recorded
    printf("\n\nWelcome, please enter the readings from today's weather monitoring...\n");

    // this number will be used in the calloc() function
    scanf("%d", &hours);

    // allocating memory into the readings pointer
    readings = calloc(hours, sizeof(int));


    // if statement if the memory fails to allocate
    if (readings == NULL)
    {

        printf("Failed to allocate memory.");

    }
    // end if

    // code will only continue if memory is allocated successfully
    else
    {

        printf("\n...\nYou have %d weather entries today.\n\nPlease enter the %d weather readings below:\n", hours, hours);

        // for used to enter the readings from the day
        for (time = 1200, i = 0; i < hours; i++)
        {
            
            // displaying the reading time that should be entered
            time = time + (single_hour * i); 

            printf("%d - ", time);

            // retrieving the data
            scanf("%d", &*(readings + i));

        }
        // end for

        // confirms that the data has been received
        printf("\n\nData has been entered and complete.");
        
        for (time = 1200, i = 0; i < hours; i++)
        {
            // resetting the time variable
            time = time + (single_hour * i);
            printf("\n%d - %d", time, *(readings + i));

        }
        // end for
        
        free(readings);

    }
    // end else


    return 0;
}
// end main
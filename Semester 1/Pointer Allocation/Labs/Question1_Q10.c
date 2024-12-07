/*
    Program Description: Q10 - We will access the information from the array using pointer notation and
    replace any spaces with underscores.

    Author: Clarence Navarro

    Date: 12th December 2023
*/

#include <stdio.h>

#define SIZE 8
int main()
{

    char chars[SIZE] = {'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd'};
    int i;


    // for goes through array and replaces space with an underscore
    for (i = 0; i < SIZE; i++)
    {
        if (*(chars + i) == ' ')
        {

            printf("_");

        }
        // end if
        
        else
        {

            printf("%c", *(chars + i));

        }
        // end else

    }
    // end for
    

    return 0;
}
// end main
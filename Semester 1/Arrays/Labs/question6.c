// Program puts data input into ascending order.

#include <stdio.h>

#define SIZE 3

int main()
{
    //initialise values
    int user_input[SIZE] = {0};
    int i;
    int highest = 0;
    int lowest = 0;

    //ask user for input
    printf("Please enter %d integers\n", SIZE);

    //start for
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &user_input[i]);
    }
    //end for

    highest = user_input[0];
    lowest = user_input[0];

    for (i = 0; i < SIZE; i++)
    {
        if (highest > user_input[i])
        {
            highest = user_input[i];
        }

        if (lowest < user_input[i])
        {
            lowest = user_input[i];
        }
    }

    printf("Elements 0-2 are %d %d %d", user_input[0], user_input[1], user_input[2]);

    return 0;
}
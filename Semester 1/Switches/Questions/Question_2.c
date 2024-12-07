/*
Program Description: Displays 2 characters input by the user on the screen

Author: Clarence Navarro

Date: 10th October 2023
*/

#include <stdio.h>

int main()
{
    char char1 = ' ';
    char char2 = ' ';


    printf("Enter 2 characters below\n");

    scanf("%c", &char1);

     while(getchar() != '\n'); //Ensures that white spaces (enter key) is not counted as an input

    scanf("%c", &char2);

    printf("\nYou entered %d\n and %d", char1, char2); //using %d instead of %f delimiter assigns each character to a letter

    return 0;
}
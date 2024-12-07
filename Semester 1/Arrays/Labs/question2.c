// Program Description: Program converts Celsius into Fahrenheit and displays both

#include <stdio.h>

#define SIZE 3

int main()
{
    //values initialised
    int celsius[SIZE] = {0};
    int fahrenheit[SIZE] = {0};
    int i;
    int j;

    printf("Please enter temperatures in fahrenheit:\n");

    //start for loop
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &fahrenheit[i]);
        celsius[i] = (fahrenheit[i] - 32.0) * (5.0 / 9.0); 
    }

     for (j = 0; j < SIZE; j++) // start for loop
    {
        printf("%d Fahrenheit and %d Celsius\n", fahrenheit[j], celsius[j]);
    } // end for loop
    
    return 0;
}
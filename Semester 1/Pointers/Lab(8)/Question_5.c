//Program Description: Elements entered are multiplied.

#include <stdio.h>

#define SIZE 5

int main()
{
    int arr1[SIZE] = {0};
    int arr2[SIZE] = {0};
    int i, j;
    int product = 0;

    printf("Please enter the integers for array 1:\n");

    //start for
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr1[i]);  
    }
    //end for

    printf("\nPlease enter the integers for array 2: \n");

    //start for
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr2[i]);  
    }
    //end for

    printf("\nThe product of the following arrays are:\n");
    //make the loop that multiplies the digits
    //start for
    for (size_t i = 0; i < SIZE; i++)
    {
        product = arr1[i]*arr2[j];
        j = j + 1; //acts as counter so dont't have to add another for loop
        printf("%d\n", product);
    }
    
    return 0;
}
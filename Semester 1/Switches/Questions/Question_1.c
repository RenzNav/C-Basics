/*
Program Description: Displays 3 numbers on 3 separate lines

Author: Clarence Navarro

Date: 10th October 2023
*/

#include <stdio.h>

int main()
{
//initiating variables
    float num1 = 0;
    float num2 = 0;
    float num3 = 0;


    printf("Enter in 3 numbers\n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);

    printf("You entered %.2f\n, %.2f\n, %.2f\n", num1, num2, num3);

    return 0;
}
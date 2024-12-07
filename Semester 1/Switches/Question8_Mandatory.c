/*
Program Description: Calculates the sum and average of three floating-point numbers to three decimal places

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
    float sum = 0;
    float average = 0;


    printf("Enter 3 float-point numbers below\n");

//using scanf() to allow user to input data
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);

//adding the 3 numbers together
    sum = num1 + num2 + num3;
    printf("The sum of the 3 floating-point numbers is %.3f\n", sum); //Using %.3f to round the number to three decimal places

//dividing the three numbers together
    average = sum / 3;
    printf("Therefore the average of the 3 floating-point numbers is %.3f\n", average);

    return 0;
}
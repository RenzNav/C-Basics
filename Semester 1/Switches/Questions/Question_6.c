// Degrees Fahrenheit to degrees celsius converter

#include <stdio.h>

int main()
{
    float Fahrenheit = 0;
    float Celsius = 0;

    printf("Enter a temperature in degrees Fahrenheit:\n");

    scanf("%f", &Fahrenheit);

    Celsius = (Fahrenheit - 32.0) * (5.0 / 9.0);

    printf("It is %.5f degrees Celsius", Celsius);


    return 0; 
}



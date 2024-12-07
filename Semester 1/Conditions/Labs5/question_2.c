// Program checks if number is odd or even

#include <stdio.h>

int main()
{
    int integer = 0;

    printf("Please enter a digit between 1 and 100:\n");
    scanf("%d",&integer);

    integer = integer % 2;

    if (integer == 0)
    {
        printf("Number entered is even");
    }
    else
    {
        printf("Number entered is odd");
    }
    
   if (integer < 0 || integer > 100)
    {
        printf("invalid entry");
    }

    return 0;

}
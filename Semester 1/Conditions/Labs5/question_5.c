//determines if 3 numbers make a valid triangle

#include <stdio.h>

int main()
{
    //initialising data
    int side1 = 0;
    int side2 = 0;
    int side3 = 0;

    //prompting user to enter the 3 numbers for each side
    printf("Please enter first side:\n");
    scanf("%d", &side1);

    printf("Please enter second side:\n");
    scanf("%d", &side2);

    printf("Please enter third side:\n");
    scanf("%d", &side3);

    //in these circumstances a triangle is possible to be made
    if (side1 + side2 > side3 || side1 + side3 > side2 || side2 + side3 > side1)
    {
        printf("This makes a triangle");
    }
    else
    {
        printf("This does not make a triangle");
    }

    return 0;
    
}
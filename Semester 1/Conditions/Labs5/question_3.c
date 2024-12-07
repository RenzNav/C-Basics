// Reads if first integer entered is divisible by the second

#include <stdio.h>

int main()
{
    //initialise values
    int integer1 = 0;
    int integer2 = 0;
    int answer = 0; 

    //prompting user to enter 2 integers
    printf("Enter the first integer:\n ");
    scanf("%d", &integer1);

    printf("Enter the second integer:\n ");
    scanf("%d", &integer2);

    //dividing integers to find if integer can divide evenly 
    answer = integer1 % integer2;

    //modulus of 0 means that there is no remainder meaning integers divide evenly
    if (answer == 0)
    {
        printf("Integer %d is divisible by integer %d", integer1, integer2);
    }
    else
    {
        printf("Integer %d is not divisible by integer %d", integer1, integer2);
    }

    //printf("%d", answer);
    

    return 0;
}

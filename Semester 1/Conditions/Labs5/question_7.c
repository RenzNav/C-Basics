//displays numbers as days

#include <stdio.h>
 
int main()
{
    int number = ' ';


    printf("Enter a number between or equal to 1-7:\n");
    scanf("%c", &number);

    //conditions
    if (number > 0 && number < 8)
    {
        switch (number)
        {
            case '1':
                printf("Sunday");
                break;

            case '2':
                printf("Monday");
                break;

            case '3':
                printf("Tuesday");
                break;

            case '4':
                printf("Wednesday");
                break;

            case '5':
                printf("Thursday");
                break;

            case '6':
                printf("Friday");
                break;

            case '7':
                printf("Saturday");
                break;
            
            default:
                printf("Invalid number entered");
                break;
        }
    }
    return 0;
}
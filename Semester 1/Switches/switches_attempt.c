// trying to use switches

#include <stdio.h>

int main()
{
    char grade;


    printf("Enter a grade below\n");
    scanf("%c", grade);

    switch (grade)
    {
        case 'A':
        case 'a':
        {
            printf("You got A");
            break;
        }

        case 'B':
        case 'b':
        {
            printf("You got a B");
            break;
        }

        case 'C':
        case 'c':
        {
            printf("You didn't do good enough");
            break;
        }

    
    default:
       {
        printf("Wtf");
        break;
       }
       
    }



    return 0;
}
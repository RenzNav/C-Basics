/*
Program Description: Displays if a character entered is upper-cased or lower-cased 

Author: Clarence Navarro

Date: 17th October 2023
*/


#include <stdio.h>

int main()
{
    //initialise values
    char letter = ' ';

    //prompt for values
    printf("\nPlease enter a character:\n ");

    scanf("%c",&letter);

    
    //use switch operators
    switch (letter)
    {
        //declaring conditions that vowels will be detected
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':


            printf("Character entered is a vowel");
            break;
        
        default:
        {
            //if character is not vowel program states it is not a vowel
            printf("Character is a consonant");
            break;
        }
    }

    return 0;
}
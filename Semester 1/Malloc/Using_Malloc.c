// This is a personal practice to see how malloc() functions.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *container;
    int num = 0;
    int bytes = 0; // stores the number of bytes in the malloc function that will be transferred to the pointer (container)
    int temp = 0;
    int i, j;


    // prompt user to inform the system the amount of numbers they would like to enter
    printf("\n\nHow many numbers would you like to enter?:\n");

    // contains the number entered
    scanf("%d", &num);

/*  

// using the calloc() instead of malloc

    // calculates the bytes needed for the number of entries that will be made by the user
    bytes = num * sizeof(int);

    // bytes will be now stored into the pointer variable using the malloc function
    container = malloc(bytes);

*/

    container = calloc(num, sizeof(int));


    // Check if malloc was successful, i.e., check if the memory was allocated successfully 
 	if (container == NULL) 
 	{ 
   		printf("\nFailed to allocate memory\n"); 

 	} 
    // end if 

    else
    {

        // informs user that the bytes has been input into the container
        printf("...\nMemory allocated successfully!\n\nPlease enter your %d numbers below:\n", num);


        // for loop used to store the numbers entered into the container
        for(i = 0; i < num; i++)
        {

            scanf("%d", &*(container + i));

        }
        // EndFor


        // data input into container will now be displayed
        printf("\n\nInformation received!\nHere are your numbers entered:\n\n"); 


        // prints the numbers entered into the container 
        for (i = 0; i < num; i++)
        {

            printf("%d, memory address %p\n", *(container + i), (container + i));

        }
        // EndFor

        
        // sorting the numbers in the container
        // for some reason this only works with smaller numbers
        for (i = 0; i < num - 1; i++)
        {
            for (j = 1; j < num; j++)
            {

                if (*(container + i) > *(container + j))
                {

                    temp = *(container + i);
                    *(container + i) = *(container + j);
                    *(container + j) = temp;

                }
                // EndInnerIf
                
            }
            // EndInnerIf
            
        }
        // EndIf
        

        printf("\n\nHere is your container in assorted order\n");


        // print out the container in non-descending order
        for (i = 0; i < num; i++)
        {

            if (i < num - 1)
            {

                printf("%d, ", *(container + i));

            }
            // EndIf

            else
            {

                printf("%d", *(container + i));

            }
            // EndElse

        }
        // end for
        

        // do not forget to free the malloc()
        free(container);

    }
    // end else
    

    return 0;

} 
// end main
#include <stdio.h>
#include <stdlib.h>

/* Including Files */

#include "l9q1.c"
#include "l9q2.c"
#include "l9q3.c"

//--------------------------------------------------------

/* Protoyping files*/

int l9q1();
int l9q2();
int l9q3();


//--------------------------------------------------------

int final_lab9()
{
    int choice;
    
    printf("\n\n-------------------------Lab-9 Programs:-------------------------\n\n");

    printf("0.Exit Lab-9:\n");                                // -------> changes needed
    printf("1.Linear_Search.\n");
    printf("2.Binary_Search.\n");
    printf("3.Hunt and triple (hunt) till hunt is not found in array.\n");
    
    do
    {
        printf("\n\t\tEnter Lab-9 Program number : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0: printf("\n\n--------------------------Lab-9 Exited---------------------------\n");
                    break;

            case 1: l9q1();
                    break;

            case 2: l9q2();
                    break;
                    
            case 3: l9q3();
                    break;
            
        }
    } while (choice != 0);
    
    return 0;
}
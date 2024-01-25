#include <stdio.h>
#include <stdlib.h>

/* Including Files */

#include "l11q1.c"

//--------------------------------------------------------

/* Protoyping files*/

int l11q1();

//--------------------------------------------------------

int final_lab11()
{
    int choice;
    
    printf("\n\n-------------------------Lab-11 Programs:-------------------------\n\n");

    printf("0.Exit Lab-11:\n");                                // -------> changes needed
    printf("1.Menu driven program for binary search tree.\n");
   
    do
    {
        printf("\n\t\tEnter Lab-11 Program number : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0: printf("\n\n--------------------------Lab-11 Exited---------------------------\n");
                    break;

            case 1: l11q1();
                    break;

        }
    } while (choice != 0);
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

/* Including Files */

#include "l6q1.c"
#include "l6q2.c"
#include "l6q3.c"
#include "l6q4.c"
// #include "l1q5.c"
// #include "l1q6.c"
// #include "l1q7.c"
// #include "l1q8.c"

// #include "h1q1.c"
// #include "h1q2.c"
// #include "h1q3.c"
// #include "h1q4.c"
// #include "h1q5.c"

//--------------------------------------------------------

/* Protoyping files*/

int l6q1();
int l6q2();
int l6q3();
int l6q4();
// int l1q5();
// int l1q6();
// int l1q7();
// int l1q8();

// int h1q1();
// int h1q2();
// int h1q3();
// int h1q4();
// int h1q5();

//--------------------------------------------------------

int final_lab6()
{
    int choice;
    
    printf("\n\n-------------------------Lab-6 Programs:-------------------------\n\n");

    printf("0.Exit Lab-6:\n");                                // -------> changes needed
    printf("1.Creating doubly linked list using create and display functions.\n");
    printf("2.Reverse the elements in doubly linked list.\n");
    printf("3.Menu driven program for doubly linked list.\n");
    printf("4.Program to remove duplicates in a sorted doubly linked list.\n");
    
    do
    {
        printf("\n\t\tEnter Lab-6 Program number : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0: printf("\n\n--------------------------Lab-6 Exited---------------------------\n");
                    break;

            case 1: l6q1();
                    break;

            case 2: l6q2();
                    break;
                    
            case 3: l6q3();
                    break;
                    
            case 4: l6q4();
                    break;
                    
        }
    } while (choice != 0);
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

/* Including Files */

#include "l10q1.c"
#include "l10q2.c"
#include "l10q3.c"
#include "l10q4.c"
#include "l10q5.c"
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

int l10q1();
int l10q2();
int l10q3();
int l10q4();
int l10q5();
// int l1q6();
// int l1q7();
// int l1q8();

// int h1q1();
// int h1q2();
// int h1q3();
// int h1q4();
// int h1q5();

//--------------------------------------------------------

int final_lab10()
{
    int choice;
    
    printf("\n\n-------------------------Lab-10 Programs:-------------------------\n\n");

    printf("0.Exit Lab-10:\n");                                // -------> changes needed
    printf("1.Sort given 'DATES' using bubble sort.\n");
    printf("2.Selection sort in ascending order.\n");
    printf("3.Insertion sort in descending order.\n");
    printf("4.Merge sort in ascending order.\n");
    printf("5.Quick sort in descending order.\n");

    do
    {
        printf("\n\t\tEnter Lab-10 Program number : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0: printf("\n\n--------------------------Lab-10 Exited---------------------------\n");
                    break;

            case 1: l10q1();
                    break;

            case 2: l10q2();
                    break;
                    
            case 3: l10q3();
                    break;
                    
            case 4: l10q4();
                    break;
                    
            case 5: l10q5();
                    break;
               
        }
    } while (choice != 0);
    
    return 0;
}
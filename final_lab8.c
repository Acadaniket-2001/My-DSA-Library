#include <stdio.h>
#include <stdlib.h>

/* Including Files */

#include "l8q1.c"
#include "l8q2.c"
#include "l8q3.c"
#include "l8q4.c"

#include "h8q4.c"
// #include "h1q2.c"
// #include "h1q3.c"
// #include "h1q4.c"
// #include "h1q5.c"

//--------------------------------------------------------

/* Protoyping files*/

int l8q1();
int l8q2();
int l8q3();
int l8q4();
// int l1q5();
// int l1q6();
// int l1q7();
// int l1q8();

// int h1q1();
// int h1q2();
// int h1q3();
// int h1q4();
int h8q4();

//--------------------------------------------------------

int final_lab8()
{
    int choice;
    
    printf("\n\n-------------------------Lab-8 Programs:-------------------------\n\n");

    printf("0.Exit Lab-8:\n");                                // -------> changes needed
    printf("1.Queues using static array.\n");
    printf("2.Queues using linked list.\n");
    printf("3.Circular queues using static array.\n");
    printf("4.Dequeues using static array.\n");
    printf("5.Dequeues using linked list.\n");
    
    do
    {
        printf("\n\t\tEnter Lab-8 Program number : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0: printf("\n\n--------------------------Lab-8 Exited---------------------------\n");
                    break;

            case 1: l8q1();
                    break;

            case 2: l8q2();
                    break;
                    
            case 3: l8q3();
                    break;
                    
            case 4: l8q4();
                    break;
                    
            case 5: h8q4();
                    break;
          
        }
    } while (choice != 0);
    
    return 0;
}
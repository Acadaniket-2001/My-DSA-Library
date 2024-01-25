#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Including Files */

#include "l7q1.c"
#include "l7q2.c"
#include "l7q3.c"
#include "l7q4.c"
// #include "l1q5.c"
// #include "l1q6.c"
// #include "l1q7.c"
// #include "l1q8.c"

// #include "h1q1.c"
// #include "h1q2.c"
// #include "h1q3.c"
#include "h7q3.c"
#include "h7q4.c"

//--------------------------------------------------------

/* Protoyping files*/

int l7q1();
int l7q2();
int l7q3();
int l7q4();
// int l1q5();
// int l1q6();
// int l1q7();
// int l1q8();

// int h1q1();
// int h1q2();
int h7q3();
int h7q4();
// int h1q5();

//--------------------------------------------------------

int final_lab7()
{
    int choice;
    
    printf("\n\n-------------------------Lab-7 Programs:-------------------------\n\n");

    printf("0.Exit Lab-7:\n");                                // -------> changes needed
    printf("1.Menu driven program for stacks using array.\n");
    printf("2.Menu driven program for stacks using linked list.\n");
    printf("3.Program to convert infix expression to postfix expression.  (BUG ALERT)\n");
    printf("4.Program to convert infix expression to prefix expression. (BUG ALERT)\n");
    printf("5.Sorting stack (using PUSH and POP only).\n");
    printf("6.Parenthesis Matching using stacks. (BUE ALERT)\n");
    // printf("7.Operations on matrix using 2D-array.\n");
    // printf("8.Minimum distance between two elements in array.\n");
    // printf("9.Second smallest and Senond largest element in array.\n");
    // printf("10.Even followed by Odd.\n");
    // printf("11.Replacing each element with next greatest element in same array.\n");
    // printf("12.Replacing each element by product of its previous and next element in array.\n");
    // printf("13. Sorting rows in ascending and then columns in descending order in 2D_array.\n");

    do
    {
        printf("\n\t\tEnter Lab-7 Program number : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0: printf("\n\n--------------------------Lab-7 Exited---------------------------\n");
                    break;

            case 1: l7q1();
                    break;

            case 2: l7q2();
                    break;
                    
            case 3: l7q3();
                    break;
                    
            case 4: l7q4();
                    break;
                    
            case 5: h7q3();
                    break;
                    
            case 6: h7q4();
                    break;

        }
    } while (choice != 0);
    
    return 0;
}
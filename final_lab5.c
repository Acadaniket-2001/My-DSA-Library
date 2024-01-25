#include <stdio.h>
#include <stdlib.h>

/* Including Files */

#include "l5q1.c"
#include "l5q2.c"
#include "l5q3.c"
#include "l5q4.c"
#include "l5q5.c"
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

int l5q1();
int l5q2();
int l5q3();
int l5q4();
int l5q5();
// int l1q6();
// int l1q7();
// int l1q8();

// int h1q1();
// int h1q2();
// int h1q3();
// int h1q4();
// int h1q5();

//--------------------------------------------------------

int final_lab5()
{
    int choice;
    
    printf("\n\n-------------------------Lab-5 Programs:-------------------------\n\n");

    printf("0.Exit Lab-5:\n");                                // -------> changes needed
    printf("1.Menu driven program for singly circular linked list.\n");
    printf("2.Program to remove duplicates in a sorted circular linked list.\n");
    printf("3.Program to convert singly linked list to a circular linked list.\n");
    printf("4.Swap two nodes if first given key is greater than second given key.\n");
    printf("5.Count total nodes in a given circular linked list ; if found greater than given value , delete remaining nodes from beginning.\n");
    // printf("6.Find next greatest element in array.\n");
    // printf("7.Operations on matrix using 2D-array.\n");
    // printf("8.Minimum distance between two elements in array.\n");
    // printf("9.Second smallest and Senond largest element in array.\n");
    // printf("10.Even followed by Odd.\n");
    // printf("11.Replacing each element with next greatest element in same array.\n");
    // printf("12.Replacing each element by product of its previous and next element in array.\n");
    // printf("13. Sorting rows in ascending and then columns in descending order in 2D_array.\n");

    do
    {
        printf("\n\t\tEnter Lab-5 Program number : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0: printf("\n\n--------------------------Lab-5 Exited---------------------------\n");
                    break;

            case 1: l5q1();
                    break;

            case 2: l5q2();
                    break;
                    
            case 3: l5q3();
                    break;
                    
            case 4: l5q4();
                    break;
                    
            case 5: l5q5();
                    break;

        }
    } while (choice != 0);
    
    return 0;
}
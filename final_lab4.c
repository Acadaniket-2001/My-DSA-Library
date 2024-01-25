#include <stdio.h>
#include <stdlib.h>

/* Including Files */

#include "l4q1.c"
#include "l4q2.c"
#include "l4q3.c"

#include "h4q1.c"
#include "h4q2.c"
#include "h4q3.c"
#include "h4q4.c"
#include "h4q5.c"
#include "h4q6.c"
#include "h4q7.c"
#include "h4q8.c"

//--------------------------------------------------------

/* Protoyping files*/

int l4q1();
int l4q2();
int l4q3();

int h4q1();
int h4q2();
int h4q3();
int h4q4();
int h4q5();
int h4q6();
int h4q7();
int h4q8();

//--------------------------------------------------------

int final_lab4()
{
    int choice;
    
    printf("\n\n-------------------------Lab-4 Programs:-------------------------\n\n");

    printf("0.Exit Lab-4:\n");                                // -------> changes needed
    printf("1.Menu driven program for singly linked list.\n");
    printf("2.Display contents of a linked list in reverse order.\n");
    printf("3.Printing mth node from last of a linked list of 'n' nodes.\n");
    printf("4.Search an element in Linked List; if found , delete it and insert that element at beginning.\n");
    printf("5.Count the number of occurrence of elements in a linked list.\n");
    printf("6.Reverse the first 'm' elements of a linked list of 'n' nodes.\n");
    printf("7.Remove duplicates from a linked list.\n");
    printf("8.Find occurrence of all elements in a linked list.\n");
    printf("9.Insert an element in a sorted linked list in a sorted manner.\n");
    printf("10.Modify the linked list in a manner that all even numbers appear before all odd numbers.\n");
    printf("11.Check whether a single linked list is palindrome or not.\n");

    do
    {
        printf("\n\t\tEnter Lab-4 Program number : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0: printf("\n\n--------------------------Lab-4 Exited---------------------------\n");
                    break;

            case 1: l4q1();
                    break;

            case 2: l4q2();
                    break;
                    
            case 3: l4q3();
                    break;
                    
            case 4: h4q1();
                    break;
                    
            case 5: h4q2();
                    break;
                    
            case 6: h4q3();
                    break;
                    
            case 7: h4q4();
                    break;
                    
            case 8: h4q5();
                    break;
                    
            case 9: h4q6();
                    break;
                    
            case 10: h4q7();
                    break;
                    
            case 11: h4q8();
                    break;
  
        }
    } while (choice != 0);
    
    return 0;
}
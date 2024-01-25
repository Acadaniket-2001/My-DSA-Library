#include <stdio.h>
#include <stdlib.h>

/* Including Files */

#include "l2q1.c"
#include "l2q2.c"
#include "l2q3.c"
#include "l2q4.c"
#include "l2q5.c"
#include "l2q6.c"
#include "l2q7.c"

#include "h2q1.c"
#include "h2q2.c"
#include "h2q3.c"
#include "h2q4.c"

//--------------------------------------------------------

/* Protoyping files*/

int l2q1();
int l2q2();
int l2q3();
int l2q4();
int l2q5();
int l2q6();
int l2q7();

int h2q1();
int h2q2();
int h2q3();
int h2q4();

//--------------------------------------------------------

int final_lab2()
{
    int choice;
    
    printf("\n\n-------------------------Lab-2 Programs:-------------------------\n\n");

    printf("0.Exit Lab-2:\n");                                // -------> changes needed
    printf("1.Store data of 'N' employees in a structure and calculate their gross pay.\n");
    printf("2.Add 2 distances in km by passing two structures to a function.\n");
    printf("3.Store information of 10 students using structure.\n");
    printf("4.Adding 2 complex number using structure.\n");
    printf("5.Difference between 2 time periods.\n");
    printf("6.Storing information of 'N' students using dynamic memory allocation.\n");
    printf("7.Sum of 1D array along with inputed array elements using DMA.\n");
    printf("8.Printing all permutations of a string.\n");
    printf("9.Replace every element by multiplication of previous and next of an element.\n");
    printf("10.Even followed by Odd.\n");
    printf("11.Find and count frequency of maximum element in array in a single loop.\n");
    // printf("12.Replacing each element by product of its previous and next element in array.\n");
    

    do
    {
        printf("\n\t\tEnter Lab-2 Program number : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0: printf("\n\n--------------------------Lab-2 Exited---------------------------\n");
                    break;

            case 1: l2q1();
                    break;

            case 2: l2q2();
                    break;
                    
            case 3: l2q3();
                    break;
                    
            case 4: l2q4();
                    break;
                    
            case 5: l2q5();
                    break;
                    
            case 6: l2q6();
                    break;
                    
            case 7: l2q7();
                    break;
                    
            case 8: h2q1();
                    break;
                    
            case 9: h2q2();
                    break;
                    
            case 10: h2q3();
                    break;
                    
            case 11: h2q4();
                    break;
        }
    } while (choice != 0);
    
    return 0;
}
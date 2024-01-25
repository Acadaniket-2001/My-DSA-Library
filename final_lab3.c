#include <stdio.h>
#include <stdlib.h>

/* Including Files */

#include "l3q1.c"
#include "l3q2.c"
#include "l3q3.c"
#include "l3q4.c"
#include "l3q5.c"
#include "l3q6.c"
#include "l3q7.c"
#include "l3q8.c"

// #include "h1q1.c"
// #include "h1q2.c"
// #include "h1q3.c"
// #include "h1q4.c"
// #include "h1q5.c"

//--------------------------------------------------------

/* Protoyping files*/

int l1q1();
int l1q2();
int l1q3();
int l1q4();
int l1q5();
int l1q6();
int l1q7();
int l1q8();

// int h1q1();
// int h1q2();
// int h1q3();
// int h1q4();
// int h1q5();

//--------------------------------------------------------

int final_lab3()
{
    int choice;
    
    printf("\n\n-------------------------Lab-3 Programs:-------------------------\n\n");

    printf("0.Exit Lab-3:\n");                                // -------> changes needed
    printf("1.Evaluate given polynomial.\n");
    printf("2.Add 2 polynomials.\n");
    printf("3.Check whether given matrix is sparse or not.\n");
    printf("4.Find transpose of a matrix.\n");
    printf("5.Find determinant of n*n matrix.\n");
    printf("6.Find largest element in array using recursion.\n");
    printf("7.Find frequency of occurrence of number in an array.\n");
    printf("8.Find whether given matrix is lower triangular , upper triangular or Tri-diagonal matrix.\n");

    do
    {
        printf("\n\t\tEnter Lab-3 Program number : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0: printf("\n\n--------------------------Lab-3 Exited---------------------------\n");
                    break;

            case 1: l3q1();
                    break;

            case 2: l3q2();
                    break;
                    
            case 3: l3q3();
                    break;
                    
            case 4: l3q4();
                    break;
                    
            case 5: l3q5();
                    break;
                    
            case 6: l3q6();
                    break;
                    
            case 7: l3q7();
                    break;
                    
            case 8: l3q8();
                    break;
                    
        }
    } while (choice != 0);
    
    return 0;
}
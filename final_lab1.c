#include <stdio.h>
#include <stdlib.h>

/* Including Files */

#include "l1q1.c"
#include "l1q2.c"
#include "l1q3.c"
#include "l1q4.c"
#include "l1q5.c"
#include "l1q6.c"
#include "l1q7.c"
#include "l1q8.c"

#include "h1q1.c"
#include "h1q2.c"
#include "h1q3.c"
#include "h1q4.c"
#include "h1q5.c"

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

int h1q1();
int h1q2();
int h1q3();
int h1q4();
int h1q5();

//--------------------------------------------------------

int final_lab1()
{
    int choice;
    
    printf("\n\n-------------------------Lab-1 Programs:-------------------------\n\n");

    printf("0.Exit Lab-1:\n");                                // -------> changes needed
    printf("1.Max and Min in array.\n");
    printf("2.Reverse array.\n");
    printf("3.Linear search in array.\n");
    printf("4.Sort array.\n");
    printf("5.Find elements between two given elements in array.\n");
    printf("6.Find next greatest element in array.\n");
    printf("7.Operations on matrix using 2D-array.\n");
    printf("8.Minimum distance between two elements in array.\n");
    printf("9.Second smallest and Senond largest element in array.\n");
    printf("10.Even followed by Odd.\n");
    printf("11.Replacing each element with next greatest element in same array.\n");
    printf("12.Replacing each element by product of its previous and next element in array.\n");
    printf("13. Sorting rows in ascending and then columns in descending order in 2D_array.\n");

    do
    {
        printf("\n\t\tEnter LAb-1 Program number : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0: printf("\n\n--------------------------Lab-1 Exited---------------------------\n");
                    break;

            case 1: l1q1();
                    break;

            case 2: l1q2();
                    break;
                    
            case 3: l1q3();
                    break;
                    
            case 4: l1q4();
                    break;
                    
            case 5: l1q5();
                    break;
                    
            case 6: l1q6();
                    break;
                    
            case 7: l1q7();
                    break;
                    
            case 8: l1q8();
                    break;
                    
            case 9: h1q1();
                    break;
                    
            case 10: h1q2();
                    break;
                    
            case 11: h1q3();
                    break;
                    
            case 12: h1q4();
                    break;
                    
            case 13: h1q5();
                    break;
                    
        }
    } while (choice != 0);
    
    return 0;
}
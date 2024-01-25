#include <stdio.h>
#include <stdlib.h>

/* Including Files */

#include "final_lab1.c"
#include "final_lab2.c"
#include "final_lab3.c"
#include "final_lab4.c"
#include "final_lab5.c"
#include "final_lab6.c"
#include "final_lab7.c"
#include "final_lab8.c"
#include "final_lab9.c"
#include "final_lab10.c"
#include "final_lab11.c"


//--------------------------------------------------------

/* Protoyping files*/

int final_lab1();
int final_lab2();
int final_lab3();
int final_lab4();
int final_lab5();
int final_lab6();
int final_lab7();
int final_lab8();
int final_lab9();
int final_lab10();
int final_lab11();


//--------------------------------------------------------

int main()
{
    int choice;
    
    printf("\n\n-------------------------> DSA_Projects <-------------------------\n\n");


    printf("Lab 1 Programs \n");
    printf("Lab 2 Programs \n");
    printf("Lab 3 Programs \n");
    printf("Lab 4 Programs \n");
    printf("Lab 5 Programs \n");
    printf("Lab 6 Programs \n");
    printf("Lab 7 Programs \n");
    printf("Lab 8 Programs \n");
    printf("Lab 9 Programs \n");
    printf("Lab 10 Programs \n");
    printf("Lab 11 Programs \n");
    printf("\nPress '0' to EXIT\n");
   
    do
    {
        printf("\n\t\tEnter Lab number : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0: printf("\n\n-------------------------- Bye, Bye :) ---------------------------\n");
                    break;

            case 1: final_lab1();
                    break;
            
            case 2: final_lab2();
                    break;

            case 3: final_lab3();
                    break;

            case 4: final_lab4();
                    break;

            case 5: final_lab5();
                    break;

            case 6: final_lab6();
                    break;

            case 7: final_lab7();
                    break;

            case 8: final_lab8();
                    break;

            case 9: final_lab9();
                    break;

            case 10: final_lab10();
                    break;

            case 11: final_lab11();
                    break;
        }
    } while (choice != 0);
    
    return 0;
}
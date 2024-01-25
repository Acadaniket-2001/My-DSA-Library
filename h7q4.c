#include <stdio.h>
#include <string.h>
 
#define MAXSIZE 100
#define TRUE 1
#define FALSE 0 
 
// Structure defining Stackh74 data structure
struct Stackh74 {
    int top;
    int array[MAXSIZE];
} st;
 
/*
Initializeh74s the top index to -1
*/
void initializeh74() {
 st.top = -1;
}
 
/*
 Checks if Stackh74 is Full or not 
*/
int isFullh74() {   
    if(st.top >= MAXSIZE-1)
        return TRUE;
    else
        return FALSE;
}
 
/*
 Checks if Stackh74 is Empty or not
*/
int isEmptyh74() {
 if(st.top == -1)
     return TRUE;
 else
     return FALSE;
}
 
/*
 Adds an element to stackh74 and then increment top index 
*/
void pushh74(int num) {
    if (isFullh74())
        printf("Stackh74 is Full...\n");
    else {
        st.array[st.top + 1] = num;
        st.top++;
    }
}
 
/*
 Removes top element from stackh74 and decrement top index
*/
int poph74() {
    if (isEmptyh74())
        printf("Stackh74 is Empty...\n");
    else {
     st.top = st.top - 1;
        return st.array[st.top+1];
    }
}
 
int h7q4() {
    char inputString[100], c;
    int i, length;
    initializeh74();
    printf("Enter a string of paranthesis(use only {} <---brackets )\n");
    gets(inputString);
    length = strlen(inputString);
    /*
    # for '{' : we pushh74 '{' in stackh74 
    # for '}' : we poph74 a character from stackh74. For every '}' there must be one '{' earlier.  
                This will ensure that
                ** There are equal number of '{' and '}' characters in string.
                ** For every '{' there is a '}' in input string later.   
             
    */
    for(i = 0; i < length; i++){
        if(inputString[i] == '{')
            pushh74(inputString[i]);
        else if(inputString[i] == '}')
            poph74();
        else {
            printf("Error : Invalid Character !! \n");
            return 0;
        }
    }
     
    if(isEmptyh74())
        printf("Valid Paranthesis Expression\n");
    else
        printf("InValid Paranthesis Expression\n");
         
    return 0;
}
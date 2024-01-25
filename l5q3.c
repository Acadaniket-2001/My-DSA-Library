#include <stdio.h>

struct node53
{
    int data;
    struct node53 *next; 
};

void convert53(struct node53 *h)
{
    struct node53 *ptr = h;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = h;
}

int l5q3()
{
    /* creating singly linked list */

    struct node53 head ,temp1 , temp2;
    head.data = 1;
    temp1.data = 2;
    temp2.data = 3;
    head.next = &temp1;
    temp1.next = &temp2;
    temp2.next = NULL;

    convert53(&head);
    printf("CREATED SINGLY LINKED LIST IS : 1->2->3\n");
    printf("\n\nNow, performing an operation only possible in singly circular linked list,\n and not in singly linked list.\n\n");
    printf("\n\nprinting head node's data using last node :  %d\n",(temp2.next)->data);
    return 0;
}
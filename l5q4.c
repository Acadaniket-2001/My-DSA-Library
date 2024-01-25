#include <stdio.h>
#include <stdlib.h>

struct node54
{
    int data;
    struct node54 *next;
};

void create54(struct node54 **h)
{
    printf("\t\tCREATING THE LIST\n\n");
    int n;
    struct node54 *curr,*ptr;
    printf("ENTER NUMBER OF NODES : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS: ");
    for(int i=0;i<n;i++)
    {
       curr= malloc(sizeof(struct node54));
       curr->next = NULL;
       scanf("%d",&curr->data);
       if(*h == NULL)
        {
            *h = curr;
            ptr = curr;
            ptr->next = curr;
        }
        else
        {
            curr->next = *h;
            ptr->next = curr;
            ptr = curr;
        }
    }
}

void display54(struct node54 *h)
{
    if(h == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct node54 *ptr;
    
    for(ptr= h;ptr->next != h;ptr = ptr->next)
    {
        printf("%d\t",ptr->data);
    }
    printf("%d",ptr->data);

}

void swap_if_greater54(struct node54 **h)
{
    int x,y;
    printf("ENTER TWO INTEGER VALUES (x and y): ");
    scanf("%d%d",&x,&y);
    if(x > y)
    {
        struct node54 *currX = *h, *prevX = NULL;
        do
        {
            if(currX -> data == x)
            {
                break;
            }
            prevX = currX;
            currX = currX->next;
        } while (currX != *h);
        if(currX == *h  && currX->data != x)
        {
            printf("'x' not found  in the list\n");
            return;
        }
        
        struct node54 *currY = *h, *prevY = NULL;
        do
        {
            if(currY -> data == y)
            {
                break;
            }
            prevY = currY;
            currY = currY->next;
        } while (currY != *h);
        if(currY == *h  &&  currY->data != y)
        {
            printf("'y' not found  in the list\n");
            return;
        }
        struct node54 *tail = *h, *temp;
        do
        {
            tail = tail->next;
        } while (tail->next != *h);
        
        if(currX == *h  &&  currY != tail)
        {
            *h = currY;
            temp = currY->next;
            currY->next = currX->next;
            prevY->next = currX;
            currX->next = temp;
            prevX->next = currY;
        }
        else if(currY == *h  &&  currX != tail)
        {
            *h = currX;
            temp = currX->next;
            currX->next = currY->next;
            prevX->next = currY;
            currY->next = temp;
            prevY->next = currX;
        }
        else if(currX == *h  &&  currY == tail)
        {
            *h = currY;
            // temp = currY->next;
            currY->next = currX->next;
            currX->next = currY;                        ///
            prevY->next = currX;
        }
        else if(currY == *h  &&  currX == tail)
        {
            *h = currX;
            // temp = currY->next;
            currX->next = currY->next;
            currY->next = currX;                        ///
            prevX->next = currY;
        }
        else if(currX->next == currY)
        {
            prevX->next = currY;
            temp = currY->next;
            currY->next = currX;
            prevY->next = currX;
            currX->next = temp;
        }
        else if(currY->next == currX)
        {
            prevY->next = currX;
            temp = currX->next;
            currX->next = currY;
            prevX->next = currY;
            currY->next = temp;
        }
        else
        {
            prevX->next = currY;
            temp = currY->next;
            currY->next = currX->next;
            prevY->next = currX;
            currX->next = temp;
        }
    }
}

int l5q4()
{
    struct node54 *head = NULL;
    create54(&head);
    printf("THE LIST CREATED IS : ");
    display54(head);
    printf("\n\n");
    swap_if_greater54(&head);
    printf("THE MODIFIED LIST IS : ");
    display54(head);
    return 0;
}
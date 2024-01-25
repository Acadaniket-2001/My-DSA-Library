#include <stdio.h>
#include <stdlib.h>

struct node64
{
    int data;
    struct node64 *next,*prev;
};

void create64(struct node64 **h)
{
    int n;
    struct node64 *curr,*tail;
    printf("\n\t\tCREATING THE LIST");
    printf("\n\nENTER THE NUMBER OF NODES : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS (in sorted manner) : ");
    for(int i=0;i<n;i++)
    {
        curr = malloc(sizeof(struct node64));
        curr->next = curr->prev = NULL;
        scanf("%d",&curr->data);
        if( *h == NULL )
        {
            *h = tail = curr;
        }
        else
        {
            curr->prev = tail;
            tail->next = curr;
            tail = curr;
        }
    }
}

void display64(struct node64 *h)
{
    if(h == NULL)
    {
        printf("\nLIST EMPTY\n");
    }
    while(h != NULL)
    {
        printf("%d <-> ",h->data);
        h =h->next;
    }
}

void del_dup64(struct node64 *h)
{
    struct node64 *q = h, *p = q->next;
    while(p != NULL)
    {
        while(p->data == q->data  &&  p->next != NULL)
        {
            p->next->prev = q;
            p->prev->next = p->next;
            free(p);
            p = q->next;
        }
        if(p->next == NULL  &&  p->data == q->data)
        {
            q->next = NULL;
            free(p);
            break;
        }
        q = p;
        p = p->next;
    }
}

int l6q4()
{
    struct node64 *head = NULL;
    create64(&head);
    printf("LIST BEFORE REMOVING DUPLICATES\n");
    display64(head);
    del_dup64(head);
    printf("\nLIST AFTER REMOVING DUPLICATES\n");
    display64(head);
    return 0;
}
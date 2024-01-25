#include <stdio.h>
#include <stdlib.h>

struct node52
{
    int data;
    struct node52 *next;
};

void create52(struct node52 **h)
{
    printf("\t\tCREATING THE LIST\n\n");
    int n;
    struct node52 *curr,*ptr;
    printf("ENTER NUMBER OF NODES : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS (in sorted manner): ");
    for(int i=0;i<n;i++)
    {
       curr= malloc(sizeof(struct node52));
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

void display52(struct node52 *h)
{
    if(h == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct node52 *ptr;
    
    for(ptr= h;ptr->next != h;ptr = ptr->next)
    {
        printf("%d\t",ptr->data);
    }
    printf("%d",ptr->data);
}

void del_dup52(struct node52 *h)
{
    struct node52 *p = h, *q = h->next;
    while(q != h)
    {
        if(p->data  != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            free(q);
            q = p->next;
        }
    }
}

int l5q2()
{
    struct node52 *head = NULL;
    create52(&head);
    printf("\nLIST BEFORE REMOVING DUPLICATES :\n");
    display52(head);
    del_dup52(head);
    printf("\nLIST AFTER REMOVING DUPLICATES :\n");
    display52(head);
    return 0;
}
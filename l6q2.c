#include <stdio.h>
#include<malloc.h>
struct node62
{
    int data;
    struct node62 *next,*prev;
};

void create62(struct node62 **h)
{
    int n;
    struct node62 *curr,*tail;
    printf("ENTER THE NUMBER OF NODES : ");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(int i=0;i<n;i++)
    {
        curr = malloc(sizeof(struct node62));
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

void rev_seq62(struct node62 **h)
{
    if(*h == NULL)
    {
        printf("LIST EMPTY\n");
        return;
    }
    // struct node62 *ptr = *h,*prev = NULL,*temp;           //method 1
    // while(ptr != NULL)
    // {
    //     temp = ptr->next;
    //     ptr->next = ptr->prev;
    //     ptr->prev = temp;
    //     prev = ptr;
    //     ptr = ptr->prev;
    // }
    // *h = prev;
    
    struct node62 *p = *h, *q = NULL, *r = NULL;          //udemy method 2
    while(p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
        q->prev = p;
    }
    *h = q;
}

void display62(struct node62 *h)
{
    while(h != NULL)
    {
        printf("%d <-> ",h->data);
        h =h->next;
    }
}

int l6q2()
{
    struct node62 *head = NULL;
    create62(&head);
    printf("Created list is : ");
    display62(head);  
    printf("\n\n");
    rev_seq62(&head);
    printf("Reversed list is : ");
    display62(head); 
    return 0;
}
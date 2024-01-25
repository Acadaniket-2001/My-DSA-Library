#include <stdio.h>
#include<malloc.h>
struct node61
{
    int data;
    struct node61 *next,*prev;
};
void create61(struct node61 **h)
{
    int n;
    struct node61 *curr,*tail;
    printf("ENTER THE NUMBER OF NODES : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    for(int i=0;i<n;i++)
    {
        curr = malloc(sizeof(struct node61));
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

void display61(struct node61 *h)
{
    while(h != NULL)
    {
        printf("%d -> ",h->data);
        h =h->next;
    }
}

int l6q1()
{
    struct node61 *head = NULL;
    create61(&head);
    display61(head);   
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct node55
{
    int data;
    struct node55 *next;
};

void create55(struct node55 **h)
{
    printf("\t\tCREATING THE LIST\n\n");
    int n;
    struct node55 *curr,*ptr;
    printf("ENTER NUMBER OF NODES : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS: ");
    for(int i=0;i<n;i++)
    {
       curr= malloc(sizeof(struct node55));
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

void print55(struct node55 *h)
{
    if(h == NULL)
    {
        printf("LIST EMPTY\n");
    }
    struct node55 *ptr;
    
    for(ptr= h;ptr->next != h;ptr = ptr->next)
    {
        printf("%d\t",ptr->data);
    }
    printf("%d",ptr->data);

}

int count55(struct node55 *h)
{
    int i=0;
    struct node55 *ptr = h;
    do
    {
        ptr  = ptr->next;
        i++;
    }while(ptr != h);
    return i;
}

void del_at_begin55(struct node55 **h)
{
    struct node55 *ptr = *h,*temp = *h;
    if((*h)->next == *h)
    {
        *h = NULL;
        free(ptr);
        return;
    }
    do
    {
        temp = temp->next;
    }while(temp -> next != *h);
    temp -> next = (*h) -> next;
    *h = (*h) -> next;
    free(ptr);
}

void del_by_count55(struct node55 **h,int k)
{
    int num = count55(*h);
    if(num>k)
    {
        while(num != k)
        {
            del_at_begin55(h);
            // printf("\n");
            // print55(*h);
            num--;
        }
        printf("\n");
    }
}

int l5q5()
{
    struct node55 *head = NULL;
    create55(&head);
    print55(head);
    int k;
    printf("\n\nENTER K : ");
    scanf("%d",&k);
    printf("LIST BEFORE DELETING : ");
    print55(head);
    del_by_count55(&head,k);
    printf("\n");
    printf("LIST AFTER DELETING : ");
    print55(head);
    return 0;
}
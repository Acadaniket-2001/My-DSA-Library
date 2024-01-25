# include <stdio.h>
# include <stdlib.h>
struct nodeh41
{
    int data;
    struct nodeh41* next;
}*head = NULL,*tail = NULL;

void printh41(struct nodeh41 *h)
{
    if(h == NULL)
    {
        printf("LIST IS EMPTY\n");
    }
    while(h != NULL)
    {
        printf("%d\t", h->data);
        h = h-> next;
    }
}

int h4q1()
{
    struct nodeh41 *curr;
    printf("\t\tCREATING THE LIST\n\n");
    int n;
    printf("ENTER NUMBER OF NODEh41S : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : ");
    for(int i=0;i<n;i++)
    {
        curr= malloc(sizeof(struct nodeh41));
        curr -> next = NULL;
        scanf("%d",&curr->data);

        if(head == NULL)
        {
            head = tail = curr;
        }
        else
        {
            tail -> next = curr;
            tail = curr;
        }
    }
    // printh41(head);
    struct nodeh41 *ptr = head,*prev;
    printf("ENTER THE VALUE OF N : ");
    int m;
    scanf("%d",&m);
    while(ptr != NULL)
    {
        if(ptr == head && ptr->data == n)
        {
            printf("ELEMENT ALREADY PRESENT AT BEGINNING\n");
            break;
        }
        else
        {
            prev = ptr;
            ptr = ptr->next;
            if(ptr->data  == m)
            {
                prev->next = ptr->next;
                ptr->next = head;
                head = ptr;
                // free(ptr);
                // add(n);
                break;
            }
        }
    }
    if(ptr == NULL)
    {
        printf("ELEMENT NOT FOUND\n");
    }
    printh41(head);
    return 0;
}
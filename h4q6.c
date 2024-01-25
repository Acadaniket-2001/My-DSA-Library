#include <stdio.h>
#include <malloc.h>
 struct nodeh46{
    int data;
    struct nodeh46* next;
 }*headh46 =NULL,*tailh46 = NULL;

void printh46(struct nodeh46 *h)
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

void insert_sortedh46(struct nodeh46 **h,int val)
{
    struct nodeh46 *curr = malloc(sizeof(struct nodeh46));
    curr->next = NULL;
    curr->data = val;
    if(*h == NULL)
    {
        *h = curr;
    }
    else if((*h)->data >val)
    {
        curr->next = *h;
        *h = curr;
    }
    else
    {
        struct nodeh46 *ptr = *h;
        while(ptr->next != NULL  &&  ptr->next->data < val)
        {
            ptr = ptr->next;
        }
        curr->next = ptr->next;
        ptr->next = curr;
    }
}
int h4q6()
{
    struct nodeh46 *curr;
    printf("\t\tCREATING THE LIST\n\n");
    int n;
    printf("ENTER NUMBER OF NODES : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS IN ASCENDING ORDER: ");
    for(int i=0;i<n;i++)
    {
        curr= malloc(sizeof(struct nodeh46));
        curr -> next = NULL;
        scanf("%d",&curr->data);

        if(headh46 == NULL)
        {
            headh46 = tailh46 = curr;
        }
        else
        {
            tailh46 -> next = curr;
            tailh46 = curr;
        }
    }
    int n1;
    printf("Enter the value to insert : ");
    scanf("%d", &n1);
    insert_sortedh46(&headh46,n1);
    printh46(headh46);
    return 0;
}
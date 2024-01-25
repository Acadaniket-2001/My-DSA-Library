# include <stdio.h>
# include <stdlib.h>
struct nodeh44
{
    int data;
    struct nodeh44* next;
}*headh44 = NULL,*tailh44 = NULL;

void printh44(struct nodeh44 *h)
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

void del_dup()
{
    struct nodeh44 *ptr = headh44,*prev,*poi;

    while(ptr->next != NULL)
    {
        prev = ptr;
        poi = ptr->next;
        while(poi != NULL)
        {
            if(poi->data == ptr->data)
            {
                prev->next = poi->next;
                free(poi);
                poi = prev->next;
                continue;
            }
            prev = poi;
            poi = poi->next;
        }
        ptr = ptr->next;
        // printf("yes\n");
    }
}

int h4q4()
{
    struct nodeh44 *curr;
    printf("\t\tCREATING THE LIST\n\n");
    int n;
    printf("ENTER NUMBER OF NODES : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : ");
    for(int i=0;i<n;i++)
    {
        curr= malloc(sizeof(struct nodeh44));
        curr -> next = NULL;
        scanf("%d",&curr->data);
        if(headh44 == NULL)
        {
            headh44 = tailh44 = curr;
        }
        else
        {
            tailh44 -> next = curr;
            tailh44 = curr;
        }
    }
    printf("MODIFIED LINKED LIST IS\n");
    del_dup();
    printh44(headh44);
    return 0;
}
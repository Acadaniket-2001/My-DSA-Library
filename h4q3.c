# include <stdio.h>
# include <stdlib.h>
struct nodeh43
{
    int data;
    struct nodeh43* next;
}*headh43 = NULL,*tailh43 = NULL;

void printh43(struct nodeh43 *h)
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
void revh43(int m)
{
    struct nodeh43 *ptr,*prev;
    ptr = prev = headh43;
    for(int j=0;j<m-1;j++)
    {
        int i=0;
        while(i < j+1)
        {
            prev = ptr;
            ptr = ptr -> next;
            i++;
        }
        prev->next = ptr->next;
        ptr->next = headh43;
        headh43 = ptr;
        // printh43(headh43);
        // printf("\n");
    }
}

int h4q3()
{
    struct nodeh43 *curr;
    printf("\t\tCREATING THE LIST\n\n");
    int n;
    printf("ENTER NUMBER OF NODES : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : ");
    for(int i=0;i<n;i++)
    {
        curr= malloc(sizeof(struct nodeh43));
        curr -> next = NULL;
        scanf("%d",&curr->data);
        if(headh43 == NULL)
        {
            headh43 = tailh43 = curr;
        }
        else
        {
            tailh43 -> next = curr;
            tailh43 = curr;
        }
    }
    int m;
    printf("ENTER THE VALUE OF M: ");
    scanf("%d",&m);
    revh43(m);
    printh43(headh43);
}
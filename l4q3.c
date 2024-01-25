# include <stdio.h>
# include <stdlib.h>
struct node43
{
    int data;
    struct node43* next;
}*head43 = NULL,*tail43 = NULL;

void print43(struct node43 *h, int n,int m)
{
    int j=0;
    while( j<(n-m) )
    {
        h = h->next;
        j++;
    }
    printf("THE %dth ELEMENT FROM LAST IS : %d",m,h->data);
}


int l4q3()
{
    struct node43 *curr;
    printf("\t\tCREATING THE LIST\n\n");
    int n;
    printf("ENTER NUMBER OF NODES : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : ");
    for(int i=0;i<n;i++)
    {
        curr= malloc(sizeof(struct node43));
        curr -> next = NULL;
        scanf("%d",&curr->data);

        if(head43 == NULL)
        {
            head43 = tail43 = curr;
        }
        else
        {
            tail43 -> next = curr;
            tail43 = curr;
        }
    }
    printf("ENTER THE VLAUE OF M : ");
    int m;
    scanf("%d",&m);
    print43(head43,n,m);
    return 0;
}
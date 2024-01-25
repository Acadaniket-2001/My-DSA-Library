# include <stdio.h>
# include <stdlib.h>
struct node2
{
    int data;
    struct node2* next;
}*head2 = NULL,*tail2 = NULL;

int count2(struct node2 *h)
{
    int i=0;
    while(h != NULL)
    {
        h = h->next;
        i++;
    }
    return i;
}

void out_rev1(struct node2 *h)
{
    int size = count2(head2);
    int a[size];
    int i=0;
    while(h != NULL)
    {
        a[i++] = h-> data;
        h = h->next;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d\t",a[j]);
    }
}

int l4q2()
{
    struct node2 *curr;
    printf("\t\tCREATING THE LIST\n\n");
    int n;
    printf("ENTER NUMBER OF NODES : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : ");
    for(int i=0;i<n;i++)
    {
        curr= malloc(sizeof(struct node2));
        curr -> next = NULL;
        scanf("%d",&curr->data);

        if(head2 == NULL)
        {
            head2 = tail2 = curr;
        }
        else
        {
            tail2 -> next = curr;
            tail2 = curr;
        }
    }
    out_rev1(head2);
    return 0;
}
# include <stdio.h>
# include <stdlib.h>
struct nodeh47
{
    int data;
    struct nodeh47* next;
}*headh47 = NULL,*tailh47 = NULL;

void printh47(struct nodeh47 *h)
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

void swaph47(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void arrangeh47(struct nodeh47 *headh47)
{
    struct nodeh47 *temp = headh47, *ptr = headh47->next;
    while(ptr->next != NULL)
    {
        if(temp->data % 2 == 1)
        {
            while(ptr != NULL && ptr->data%2 ==1)
            {
                ptr = ptr->next;
            }
            if(ptr == NULL)
            {
                break;
            }
            else
            {
                swaph47(&temp->data , &ptr->data);
            }
            temp = temp->next;
        }
        else
        {
            temp = temp->next;
            ptr = ptr->next;
        }
    }
}

int h4q7()
{
    struct nodeh47 *curr;
    printf("\t\tCREATING THE LIST\n\n");
    int n;
    printf("ENTER NUMBER OF NODEh47S : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : ");
    for(int i=0;i<n;i++)
    {
        curr= malloc(sizeof(struct nodeh47));
        curr -> next = NULL;
        scanf("%d",&curr->data);

        if(headh47 == NULL)
        {
            headh47 = tailh47 = curr;
        }
        else
        {
            tailh47 -> next = curr;
            tailh47 = curr;
        }
    }
    arrangeh47(headh47);
    printh47(headh47);
    return 0;
}
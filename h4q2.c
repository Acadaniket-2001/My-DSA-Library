# include <stdio.h>
# include <stdlib.h>
struct nodeh42
{
    int data;
    struct nodeh42* next;
}*headh42 = NULL,*tailh42 = NULL;

void count_occurh42(int s)
{
    struct nodeh42 *ptr = headh42;
    int count=0;
    while(ptr != NULL)
    {
        if(ptr->data == s)
        {
            count++;
        }
        ptr = ptr->next;
    }
    printf("TOTAL OCCURANCE OF %d IS :  %d\n",s,count);
}

int h4q2()
{
    struct nodeh42 *curr;
    printf("\t\tCREATING THE LIST\n\n");
    int n;
    printf("ENTER NUMBER OF NODES : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : ");
    for(int i=0;i<n;i++)
    {
        curr= malloc(sizeof(struct nodeh42));
        curr -> next = NULL;
        scanf("%d",&curr->data);

        if(headh42 == NULL)
        {
            headh42 = tailh42 = curr;
        }
        else
        {
            tailh42 -> next = curr;
            tailh42 = curr;
        }
    }
    int s;
    printf("ENTER VALUE TO FIND OCCURANCE : ");
    scanf("%d",&s);
    count_occurh42(s);
    return 0;
}
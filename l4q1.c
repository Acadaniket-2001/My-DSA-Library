#include <stdio.h>
#include <malloc.h>
 struct node1{
    int data;
    struct node1* next;
 }*head1 =NULL,*tail1 = NULL;

void print1(struct node1 *h)
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

void check_empty1(struct node1 *h)
{
    if(h == NULL)
    {
        printf("LIST IS EMPTY");
    }
    else
    {
        printf("LIST IS NOT EMPTY");
    }
}

void insert1(struct node1 **h)
{
    printf("ENTER VALUE AND POSITION(with zero indexing)\n ");
    int val,pos;
    scanf("%d%d",&val , &pos);
    struct node1 *ptr,*curr = malloc(sizeof(struct node1));
    curr -> data = val;
    curr -> next = NULL;
    if(*h == NULL)
    {
        *h = curr;
    }
    else
    {
        if(pos == 0)
        {
            curr->next = *h;
            *h = curr;
        }
        else
        {
            int i=0;
            ptr = *h;
            while( (i<pos-1) && (ptr->next != NULL) )
            {
                ptr = ptr->next;
                i++;
            }
            curr->next = ptr->next;
            ptr->next = curr;
        }
    }
}

void del_pos1(struct node1 **h)
{
    struct node1 *prev,*ptr =*h;
    printf("ENTER POSITION OF NODE1 TO BE DELETED(with 0 indexing)\n");
    int pos;
    scanf("%d",&pos);
    if(*h == NULL)
    {
        printf("NOTHING TO BE DELETED\n");
    }
    else
    {
        int i=0;
        if(pos == 0)
        {
            prev = *h;
            *h = prev ->next;
            free(prev);
        }
        else
        {
            while(i<pos)
            {
                prev =ptr;
                ptr = ptr ->next;
                i++;
            }
            // if(ptr != NULL && ptr ->next != NULL)
            if(ptr != NULL)
            {
                prev -> next = ptr ->next;
                free(ptr);
            }
        }
    }
}

void del_by_val1(struct node1 **h)
{
    int val;
    printf("ENTER THE VALUE : ");
    scanf("%d",&val);
    struct node1 *ptr = *h, *prev = *h;
    if(*h == NULL)
    {
        printf("LIST IS EMPTY\n");
    }
    else if((*h)->next == NULL && (*h)->data == val)
    {
        *h = NULL;
        free(ptr);
    }
    else
    {
        if( (*h)->data == val )
        {
            *h = (*h)->next;
            free(ptr);
            goto y;
        }
        ptr = (*h)->next;
        while(ptr != NULL)
        {
            if(ptr ->data != val)
            {
                prev = ptr;
                ptr = ptr ->next;
            }
            else
            {
                prev ->next =ptr ->next;
                free (ptr);
                goto y;
            }
        }
        if(ptr == NULL)
        {
            printf("VALUE NOT FOUND TO BE DELETED\n\n");
        }
        y:   ;
    }
}

void count1(struct node1 *h)
{
    int i=0;
    while(h != NULL)
    {
        h = h->next;
        i++;
    }
    printf("TOTAL NUMBER OF NODE1S IS : %d\n\n",i);
}

void search1(struct node1 *h)
{
    printf("ENTER THE VALUE TO SEARCH1 : ");
    int n,flag =0;
    scanf("%d",&n);
    struct node1 *ptr = h;
    while(ptr != NULL)
    {
        if(ptr -> data == n)
        {
            printf("FOUND\n");
            flag =1;
            break;
        }
        ptr = ptr->next;
    }
    if(flag ==0)
        {
            printf("NOT FOUND\n");
        }
    
}

 int l4q1()
 {
    struct node1 *curr;
    printf("\t\tCREATING THE LIST\n\n");
    int n;
    printf("ENTER NUMBER OF NODE1S : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : ");
    for(int i=0;i<n;i++)
    {
        curr= malloc(sizeof(struct node1));
        curr -> next = NULL;
        scanf("%d",&curr->data);

        if(head1 == NULL)
        {
            head1 = tail1 = curr;
        }
        else
        {
            tail1 -> next = curr;
            tail1 = curr;
        }
    }
    int choice;
    
    printf("\n\n1. TRAVERSE(PRINT) THE LIST\n");
    printf("2. CHECK IF THE LIST IS EMPTY\n");
    printf("3. INSERT A NODE\n");
    printf("4. DELETE A NODE (of given position; 0 indexing)\n");
    printf("5. DELETE A NODE (of given value)\n");
    printf("6. COUNT THE NODES IN THE LIST\n");
    printf("7. SEARCH1 AN ELEMENT  IN THE LIST\n");
    printf("8. EXIT\n\n");
    do
    {
        printf("\n\nENTER CHOICE TO PERFORM ABOVE ACTIONS  :  ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:     print1(head1); break;
            case 2:     check_empty1(head1); break;
            case 3:     insert1(&head1); break;
            case 4:     del_pos1(&head1); break;
            case 5:     del_by_val1(&head1); break;
            case 6:     count1(head1); break;
            case 7:     search1(head1); break;
        }
    }while(choice != 8);
    return 0;
 }
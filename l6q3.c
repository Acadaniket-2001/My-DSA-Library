#include <stdio.h>
#include<malloc.h>
struct node63
{
    int data;
    struct node63 *next,*prev;
};

void create63(struct node63 **h)
{
    int n;
    struct node63 *curr,*tail;
    printf("\n\t\tCREATING THE LIST");
    printf("\n\nENTER THE NUMBER OF NODES : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : ");
    for(int i=0;i<n;i++)
    {
        curr = malloc(sizeof(struct node63));
        curr->next = curr->prev = NULL;
        scanf("%d",&curr->data);
        if( *h == NULL )
        {
            *h = tail = curr;
        }
        else
        {
            curr->prev = tail;
            tail->next = curr;
            tail = curr;
        }
    }
}

void display63(struct node63 *h)
{
    if(h == NULL)
    {
        printf("\nLIST EMPTY\n");
    }
    while(h != NULL)
    {
        printf("%d <-> ",h->data);
        h =h->next;
    }
}

void insert63(struct node63 **h)
{
    struct node63 *ptr;
    int val, pos;
    printf("ENTER THE VALUE AND POSITION (with 0 indexing) : ");
    scanf("%d%d",&val,&pos);
    struct node63 *curr = malloc(sizeof(struct node63));
    curr->next = curr->prev = NULL;
    curr->data = val;
    if(*h == NULL)
    {
        *h = curr;
    }
    else if(pos == 0)
    {
        curr->next = *h;
        (*h)->prev = curr;
        *h = curr;
    }
    else
    {
        ptr = *h;
        int i=0;
        while(i<pos-1  &&  ptr->next != NULL)
        {
            ptr = ptr->next;
            i++;
        }
        if(ptr->next != NULL)
        {
            curr->prev = ptr;
            curr->next = ptr->next;
            ptr->next = curr;
            curr->next->prev = curr;
        }
        else
        {
            curr->prev = ptr;
            ptr->next = curr;
        }
    }
}

void del_pos63(struct node63**h)
{
    if(*h == NULL)
    {
        printf("LIST EMPTY\n");
        return;
    }
    int pos;
    printf("ENTER THE POSITION OF NODE63 TO BE DELETED :");
    scanf("%d",&pos);
    struct node63 *ptr = *h;
    int i=0;
    while(i<pos  &&  ptr != NULL)
    {
        ptr = ptr->next;
        i++;
    }
    if(ptr == NULL)
    {
        printf("NO SUCH NODE63 PRESENT\n");
    }
    else if(pos == 0  &&  ptr->next == NULL)
    {
        *h = NULL;
        free(ptr);
    }
    else if(pos == 0  &&  ptr->next != NULL)
    {
        ptr->next->prev = NULL;
        *h = ptr->next;
        free(ptr);
    }
    else if(ptr->next == NULL)
    {
        ptr->prev->next = NULL;
        free(ptr);
    }
    else
    {
        ptr->next->prev = ptr->prev;
        ptr->prev->next = ptr->next;
        free(ptr);
    }
}

void del_val63(struct node63 **h)
{
    if(*h == NULL)
    {
        printf("LIST EMPTY\n");
        return;
    }
    struct node63 *ptr = *h;
    int val;
    printf("ENTER THE VALUE TO BR DELETED : ");
    scanf("%d",&val);
    while(ptr != NULL  &&  ptr->data != val)
    {
        ptr = ptr->next;
    }
    if(ptr == NULL)
    {
        printf("VALUE NOT FOUND\n");
    }
    else if(ptr == *h  &&  ptr->next == NULL)
    {
        *h = NULL;
        free(ptr);
    }
    else if(ptr == *h  &&  ptr->next != NULL) 
    {
        ptr->next->prev = NULL;
        *h = ptr->next;
        free(ptr);
    }
    else if(ptr->next == NULL)
    {
        ptr->prev->next = NULL;
        free(ptr);
    }
    else
    {
        ptr->next->prev = ptr->prev;
        ptr->prev->next = ptr->next;
        free(ptr);
    }
}

void rev_traverse63(struct node63 *h)
{
    if(h == NULL)
    {
        printf("LIST EMPTY\n");
        return;
    }
    printf("\n\n");
    while(h->next != NULL)
    {
        h = h->next;
    }
    while(h != NULL)
    {
        printf("%d <-> ",h->data);
        h = h->prev;
    }

}

void check_empty63(struct node63 *h)
{
    if(h == NULL)
    {
        printf("\nLIST EMPTY\n");
    }
    else{
        printf("\nLIST NOT EMPTY\n");
    }
}

void count63(struct node63 *h)
{
    int cnt = 0;
    while(h != NULL)
    {
        cnt++;
        h = h->next;
    }
    printf("\nNUMBER OF NODE63S IN THE LIST IS : %d\n",cnt);
}

void search63(struct node63 *h)
{
    int val;
    printf("\n\nENTER THE VALUE TO SEARCH63 : ");
    scanf("%d",&val);
    while(h != NULL  &&  h->data != val)
    {
        h = h->next;
    }
    if(h == NULL)
    {
        printf("VALUE NOT FOUND\n");
    }
    else
    {
        printf("DATA FOUND\n");
    }
}

int l6q3()
{
    int choice;
    struct node63 *head = NULL;
    create63(&head);
    printf("\n\tTHE AVAILABLE OPERATIONS ARE :-\n");
    printf("1. TRAVERSE (display) THE LIST\n");
    printf("2. TRAVERSE (display) THE LIST IN REVERSE\n");
    printf("3. CHECK IF THE LIST IS EMPTY\n");
    printf("4. INSERT A NODE AT CERTAIN POSITION (with 0 indexing)\n");
    printf("5. DELETE A NODE AT CERTAIN POSITION (with 0 indexing)\n");
    printf("6. DELETE A NODE FOR A GIVEN KEY\n");
    printf("7. COUNT NODES IN THE LIST\n");
    printf("8. SEARCH AN ELEMENT IN THE LIST\n");
    printf("9. EXIT\n");

    do
    {
        printf("\n\t\tENTER YOUR CHOICE : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: display63(head); break;
            case 2: rev_traverse63(head); break;
            case 3: check_empty63(head); break;
            case 4: insert63(&head); break;
            case 5: del_pos63(&head); break;
            case 6: del_val63(&head); break;
            case 7: count63(head); break;
            case 8: search63(head); break;
            case 9: printf("\n\t\t     THANKS !!!\n");
            
        }
    } while (choice != 9);
    return 0;
}
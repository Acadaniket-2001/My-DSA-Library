#include <stdio.h>
#include <stdlib.h>

struct node51
{
    int data;
    struct node51 *next;
};

void create51(struct node51 **h)
{
    printf("\t\tCREATING THE LIST\n\n");
    int n;
    struct node51 *curr,*ptr;
    printf("ENTER NUMBER OF NODE5 : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS: ");
    for(int i=0;i<n;i++)
    {
       curr= malloc(sizeof(struct node51));
       curr->next = NULL;
       scanf("%d",&curr->data);
       if(*h == NULL)
        {
            *h = curr;
            ptr = curr;
            ptr->next = curr;
        }
        else
        {
            curr->next = *h;
            ptr->next = curr;
            ptr = curr;
        }
    }
}

void display51(struct node51 *h)
{
    if(h == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct node51 *ptr;
    
    for(ptr= h;ptr->next != h;ptr = ptr->next)
    {
        printf("%d\t",ptr->data);
    }
    printf("%d",ptr->data);

}

void check_empty51(struct node51 *h )
{
    if(h == NULL)
    {
        printf("\n\tLIST IS EMPTY\n");
    }
    else
    {
        printf("\nLIST IS NOT EMPTY\n");
    }
}

void insert51(struct node51 **h)
{
    int val,pos;
    printf("ENTER VALUE AND POSITION (with 0 indexing) :\n");
    scanf("%d%d",&val,&pos);
    struct node51 *ptr,*curr;
    curr = malloc(sizeof(struct node51));
    curr->next = NULL;
    curr->data = val;
    if(*h == NULL)
    {
        *h = curr;
        curr->next = curr;
    }
    else if(pos == 0)
    {
        ptr = *h;
        while(ptr -> next != *h)
        {
            ptr = ptr->next;
        }
        curr->next = ptr->next;
        ptr->next = curr;
        *h = curr;
    }
    else
    {
        ptr = *h;
        int i=0;
        while(i<pos-1)
        {
            ptr = ptr->next;
            i++;
        }
        curr->next = ptr->next;
        ptr->next = curr;
    }
}

void count51(struct node51 *h)
{
    if(h == NULL)
    {
        printf("\nNUMBER OF NODE51S IS : 0");
        return;
    }
    struct node51 *ptr = h;
    int cnt = 0;
    do
    {
        cnt++;
        ptr = ptr->next;
    }while(ptr != h);
    printf("\nNUMBER OF NODE51S IS : %d", cnt);
}

void search51(struct node51 *h)
{
    if(h == NULL)
    {
        printf("\nLIST IS EMPTY\n");
        return;
    }
    struct node51 *ptr = h;
    int val;
    printf("\n\nENTER VALUE TO SEARCH51: ");
    scanf("%d",&val);
    
    do
    {
        if(ptr->data == val)
        {
            printf("DATA FOUND\n");
            return;
        }
        ptr = ptr->next;
    }while(ptr != h);
    printf("DATA NOT FOUND\n");
}

void del_pos51(struct node51 **h)
{
    int pos;
    printf("\nENTER THE POSITION TO BE DELETED (with 0 indexing): ");
    scanf("%d",&pos);
    struct node51 *ptr, *prev;
    if(*h == NULL)
    {
        printf("\nLIST EMPTY\n");
    }
    else
    {
        ptr = *h;
        int i=0;
        while(i<pos)
        {
            i++;
            prev = ptr;
            ptr = ptr -> next;
        }
        if((ptr->next == ptr))
        {
            *h = NULL;
            free(ptr);
        }
        else if(pos == 0)
        {
            struct node51 *temp = *h;
            while(temp->next != *h)
            {
                temp = temp -> next;
            }
            temp->next = (*h)->next;
            *h = (*h)->next;
            free(ptr);
        }
        else
        {
            prev->next = ptr->next;
            free(ptr);
        }
    }
}

void del_val51(struct node51 **h)
{
    int val;
    printf("\nENTER THE VALUE TO DELETE :");
    scanf("%d",&val);
    if(*h == NULL)
    {
        printf("LIST EMPTY\n");
        return;
    }
    struct node51 *ptr = *h, *prev;
    do
    {
        if(ptr->data == val)
        {
            break;
        }
        prev = ptr;
        ptr = ptr->next;
    }while (ptr != *h);
    if(ptr == *h  &&  ptr->data != val)
    {
        printf("DATA NOT FOUND\n");
    }
    else if((*h)->next == *h)
    {
        *h = NULL;
        free(ptr);
    }
    else if(ptr == *h  &&  ptr->data == val)
    {
        struct node51 *temp = *h;
        while(temp->next != *h)
        {
            temp = temp->next;
        }
        temp->next = ptr->next;
        *h = (*h)->next;
        free(ptr);
    }
    else
    {
        prev->next = ptr->next;
        free(ptr);
    }
}

int l5q1()
{
    struct node51 *head = NULL;
    create51(&head);
    int choice;
    printf("\n\n\tTHE OPERATIONS AVAILABLE ARE :-\n");
    printf("1. TRAVERSE (print) THE LIST\n");
    printf("2. CHECK IF THE LIST IS EMPTY\n");
    printf("3. INSERT A NODE AT GIVEN POSITION (with 0 indexing)\n");
    printf("4. DELETE A NODE AT CERTAIN POSITION (with 0 indexing)\n");
    printf("5. DELETE A NODE FOR A GIVEN KEY\n");
    printf("6. COUNT NUMBER OF NODES IN THE LIST\n");
    printf("7. SEARCH AN ELEMENT IN THE LIST\n");
    printf("8. EXIT\n");

    do
    {
        printf("\n\tENTER YOUR CHOICE : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: display51(head); break;
            case 2: check_empty51(head); break;
            case 3: insert51(&head); break;
            case 4: del_pos51(&head); break;
            case 5: del_val51(&head); break;
            case 6: count51(head); break;
            case 7: search51(head); break;
            case 8: break;
        }
    } while (choice != 8);
    printf("PROGRAM CLOSED !!\n");
    return 0;
}
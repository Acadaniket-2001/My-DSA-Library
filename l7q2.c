#include<stdio.h>
#include<malloc.h>

struct node72
{
    int data;
    struct node72 *next;
};

void check_empty72(struct node72 *top)
{
    if(top == NULL)
    {
        printf("Stack Empty\n");
    }
    else
    {
        printf("Stack Non-Empty\n");
    }
}

void display72(struct node72 *top)
{
    if(top == NULL)
    {
        printf("Stack Empty\n");
        return;
    }
    for(;top != NULL;top = top->next)
    {
        printf("%d\t",top->data);
    }
    printf("\n");
}

void push72(struct node72**top)
{ 
    struct node72 *curr = malloc(sizeof(struct node72));
    if(curr == NULL)
    {
        printf("Stack OverFlow\n");
    }
    curr->next = NULL;
    printf("Enter Element : ");
    scanf("%d",&curr->data);
    if(*top == NULL)
    {
        *top = curr;
    }
    else
    {
        curr->next = *top;
        *top = curr;
    }
}

int pop72(struct node72 **top)
{
    int x = -1;
    struct node72 *ptr = *top;
    if(*top == NULL)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        x = ptr->data;
        *top = (*top)->next;
        free(ptr);
    }
    return x;
}

int l7q2()
{
    struct node72 *top = NULL; 
    int choice;
    printf("\n\n\tThe Available Operations Are :-\n");
    printf("1. Check Empty\n");
    printf("2. Display\n");
    printf("3. Push\n");
    printf("4. Pop\n");
    printf("5. Exit\n");

    do
    {
        printf("Enter Choice : ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1: check_empty72(top); break;
            case 2: display72(top); break;
            case 3: push72(&top); break;
            case 4: printf("Pop72 Value = %d\n",pop72(&top));
                    break;
            case 5: printf("THANKS !!!");
        }

    }while(choice != 5);

    return 0;
}
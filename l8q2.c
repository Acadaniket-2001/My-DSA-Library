#include <stdio.h>
#include <malloc.h>

struct node82
{
    int data;
    struct node82 *next;
}*front82 = NULL, *rear82 = NULL;

void enqueue82()
{
    int x;
    printf("Enter The Element : ");
    scanf("%d",&x);
    struct node82 *curr = malloc(sizeof(struct node82));
    if(curr == NULL)
    {
        printf("Queue is Full\n");
        return;
    }
    else
    {
        curr->data = x;
        curr->next = NULL;
        if(front82 == NULL)
        {
            front82 = rear82 = curr;
        }
        else
        {
            rear82->next = curr;
            rear82 = curr;
        }
    }
}

int dequeue82()
{
    int x = -1;
    struct node82 *ptr = front82;
    if(front82 == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        front82 = front82->next;
        x = ptr->data;
        free(ptr);
    }
    return x;
}

void peek82()
{
    printf("Front82 In Queue : %d\n",front82->data);
    printf("Rear82 In Queue : %d\n",rear82->data);
}

void display82()
{
    struct node82 *ptr;
    for(ptr=front82;ptr != NULL;ptr = ptr->next)
    {
        printf("%d ",ptr->data);
    }
    printf("\n");
}

void isEmpty82()
{
    if(front82 == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue Non-Empty\n");
    }
}

int l8q2()
{

    int choice;

        printf("\n\n\tThe Available Operations Are :-\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. IsEmpty\n");
        printf("6. Exit\n");
        
    do
    {
        printf("Enter Your Choice : ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1: enqueue82(); break;
            case 2: printf("Poped Value = %d\n",dequeue82()); break;
            case 3: peek82(); break;
            case 4: display82(); break;
            case 5: isEmpty82(); break;
            case 6: printf("THANKS !!!\n");
        }
    }while(choice != 6);
    
    return 0;
}
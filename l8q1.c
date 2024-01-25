#include <stdio.h>
#include <malloc.h>

struct Queue81{
    int size;
    int front,rear;
    int *Q;
};

void enqueue81(struct Queue81 *q)
{
    int x;
    printf("Enter The Element : ");
    scanf("%d",&x);
    if(q->rear == q->size - 1)
    {
        printf("Queue81 is Full\n");
    }
    else{
        q->rear++;
        q->Q[q->rear] = x;
    }
}

int dequeue81(struct Queue81 *q)
{
    int x = -1;
    if(q->front == q->rear)
        printf("Queue81 is Empty\n");
    else{
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}

void peek81(struct Queue81 q)
{
    if(q.front == q.rear)
    {
        printf("Queue81 Empty\n");
        return;
    }
    else
    {
        printf("Front In Queue81 : %d\n",q.Q[q.front+1]);
        printf("Rear In Queue81 : %d\n",q.Q[q.rear]);
    }
}

void display81(struct Queue81 q)
{
    if(q.front==q.rear)
    {
        printf("Queue81 Empty\n");
        return;
    }
    for(int i=q.front+1;i<=q.rear;i++)
    {
        printf("%d\t",q.Q[i]);
    }
    printf("\n");
}

void isEmpty81(struct Queue81 q)
{
    if(q.front == q.rear)
    {
        printf("Queue81 Empty\n");
    }
    else
    {
        printf("Queue81 Non-Empty\n");
    }
}

void isFull81(struct Queue81 q)
{
    if(q.rear == q.size-1)
    {
        printf("Queue81 Full\n");
    }
    else{
        printf("Queue81 Not-Full\n");
    }
}

void create81(struct Queue81 *q)
{
    int n;
    printf("Enter Stack Size : ");
    scanf("%d",&q->size);
    q->front = q->rear  = -1;
    q->Q = malloc(q->size * sizeof(int));
}
/*  OR for enqueue81 function
void enqueue81(struct Queue81 *q)
{
    int n;
    do
    {
        printf("ENTER THE NUMBER OF ELEMENTS TO BE INSERTED :");
        scanf("%d",&n);
    } while (n > q->size);
    if(q->rear == q->size - 1)
    {
        printf("Queue81 is Full\n");
    }
    else{
        printf("ENTER ELEMENT : ");
        q->rear++;
        scanf("%d",&q->Q[q->rear]);
    }   
}
*/

int l8q1()
{
    struct Queue81 q;
    create81(&q);
    int choice;

        printf("\n\n\tThe Available Operations Are :-\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. IsEmpty\n");
        printf("6. IsFull\n");
        printf("7. Exit\n");
        
    do
    {
        printf("Enter Your Choice : ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1: enqueue81(&q); break;
            case 2: printf("Poped Value = %d\n",dequeue81(&q)); break;
            case 3: peek81(q); break;
            case 4: display81(q); break;
            case 5: isEmpty81(q); break;
            case 6: isFull81(q); break;
            case 7: printf("THANKS !!!\n");
        }
    }while(choice != 7);
    return 0;
}
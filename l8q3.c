#include <stdio.h>
#include <malloc.h>

struct Queue83
{
    int size,front,rear, *Q;
};

void create83(struct Queue83 *q,int size)
{
    q->size = size;
    q->front = q->rear = 0;
    q->Q = malloc(size * sizeof(int));
}

void enqueue83(struct Queue83 *q)
{
    int x;
    printf("Enter the value : ");
    scanf("%d",&x);
    if((q->rear+1)%q->size == q->front)              //  rear+1 % size == front;
    {
        printf("Queue83 is Full\n");
    }
    else
    {
        q->rear = (q->rear+1)%q->size;               //   rear = rear+1 % size;
        q->Q[q->rear] = x;                           //   Q[rear] = x;
    }
}

int dequeue83(struct Queue83 *q)
{
    int x = -1;
    if(q->front == q->rear)
    {
        printf("Queue83 is Empty\n");
    }
    else
    {
        q->front = (q->front+1)%q->size;
        x = q->Q[q->front];
    }
    return x;
}

void display83(struct Queue83 q)
{
    for(int i=(q.front+1) % q.size  ;  i<=q.rear  ;  (i++) % q.size)    //  for( i=(front+1)%size ; i<=rear ; (i++)%size )
    {
        printf("%d\t",q.Q[i]);
    }
    printf("\n");
}

void peek83(struct Queue83 q)
{
    if(q.front == q.rear)
    {
        printf("Queue83 is Empty\n");
        return;
    }
    else
    {
        printf("Front in Queue83 : %d\n",q.Q[q.front+1]);
        printf("Rear in Queue83 : %d\n",q.Q[q.rear]);
    }
}

void isEmpty83(struct Queue83 q)
{
    if(q.front == q.rear)
    {
        printf("Queue83 is Empty\n");
    }
    else{
        printf("Queue83 is Non_Empty\n");
    }
}

void isFull83(struct Queue83 q)
{
    if((q.rear+1)%q.size == q.front%q.size)
    {
        printf("Queue83 Is Full\n");
    }
    else{
        printf("Queue83 is not full\n");
    }
}

int l8q3()
{
    struct Queue83 q;
    create83(&q,6);
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
            case 1: enqueue83(&q); break;
            case 2: printf("Poped Value = %d\n",dequeue83(&q)); break;
            case 3: peek83(q); break;
            case 4: display83(q); break;
            case 5: isEmpty83(q); break;
            case 6: isFull83(q); break;
            case 7: printf("THANKS !!!\n");
        }
    }while(choice != 7);
    return 0;
}
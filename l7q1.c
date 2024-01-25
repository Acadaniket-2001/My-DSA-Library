#include<stdio.h>
#include <malloc.h>

struct stack71
{
    int size,top,*S;
};

void create71(struct stack71 *s)
{
    int n;
    printf("Enter Stack Size : ");
    scanf("%d",&n);
    s->size = n;
    s->top = -1;
    s->S = malloc(sizeof(int)*n);
}

int isEmpty71(struct stack71 s)
{
    if(s.top == -1)
    {
        // printf("Stack71 Empty\n");
        return 1;
    }
    else
    {
        // printf("Stack71 Non-Empty\n");
        return 0;
    }
}

void display71(struct stack71 s)
{
    if(s.top == -1)
    {
        printf("Stack71 Empty\n");
        return;
    }
    for(int i=0 ; i <= s.top ; i++)
    {
        printf("%d ",s.S[i]);
    }
    printf("\b--->TOP \n");
}

void push71(struct stack71 *s, int x)
{
    if(s->top == s->size - 1)
    {
        printf("Stack71 Overflow\n");
    }
    else
    {
        s->top++;
        s->S[s->top] = x;
    }
}

int pop71(struct stack71 *s)
{
    int x = -1;
    if(s->top == -1)
    {
        printf("Stack71 Underflow\n");
    }
    else
    {
        x = s->S[s->top];
        s->top--;
    }
    return x;
}

int lowest71(struct stack71 s)
{
    int index;
    if(s.top == -1)
    {
        printf("Stack71 Empty\n");
        return -1;
    }
    int min = s.S[s.top];
    int i = s.top - 1;
    while(i>=0)
    {
        if(s.S[i] < min)
        {
            min = s.S[i];
            index = i;
        }
        i--;
    }
    return index;
}

int highest71(struct stack71 s)
{
    if(s.top == -1)
    {
        printf("Stack71 Empty\n");
        return -1;
    }
    int max = s.S[s.top];
    int i = s.top - 1;
    while(i>=0)
    {
        if(s.S[i] > max)
        {
            max = s.S[i];
        }
        i--;
    }
    return max;
}

int middle_lowest71(struct stack71 s)
{
    if(s.top == -1)
    {
        printf("Stack71 Empty\n");
        return -1;
    }
    int arr[s.top+1];
    int i = s.top;
    while(i>= 0)
    {
        arr[i] = s.S[s.top];
        i--;
        s.top--;
    }
    for(i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        for(int j=i+1;j<sizeof(arr)/sizeof(int);j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr[(sizeof(arr)/sizeof(int))/2];

}

struct stack71 reverse71(struct stack71 *s)
{
    struct stack71 revstk;
    revstk.size = s->size;
    revstk.top = -1;
    revstk.S = malloc(sizeof(int) * revstk.size);
    while(!isEmpty71(*s))                                   //////
    {
        push71(&revstk,pop71(s));
    }
    return revstk;
}

int l7q1()
{
    struct stack71 s;
    create71(&s);
    int choice;
    printf("\n\n\tThe Available Operations Are :-\n");
    printf("1. Check Empty\n");
    printf("2. Display\n");
    printf("3. Push\n");
    printf("4. Pop\n");
    printf("5. peek Lowest Element\n");
    printf("6. peek Highest Element\n");
    printf("7. Peek Middle Element\n");
    printf("8. Reverse Stack\n");
    printf("9. Exit\n");

    int x;

    do
    {
        printf("Enter Choice : ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1: if(isEmpty71(s))
                    {
                        printf("Stack Empty\n");
                    }
                    else
                    {
                        printf("Stack Non-Empty\n");
                    } 
                    break;
                    
            case 2: display71(s); break;

            case 3: printf("Enter the element : ");
                    scanf("%d",&x);
                    push71(&s,x); break;

            case 4: printf("Pop Value = %d\n",pop71(&s));
                    break;

            case 5: printf("Lowest Element : %d\n",s.S[lowest71(s)]); break;
            
            case 6: printf("Highest Element : %d\n",highest71(s)); break;

            case 7: printf("Middle Lowsest Element : %d\n",middle_lowest71(s)); break;

            case 8: s = reverse71(&s); break;

            // case 9: s = sort(&s); break;

            case 9: printf("THANKS !!!");
        }

    }while(choice != 9);

    return 0;
}
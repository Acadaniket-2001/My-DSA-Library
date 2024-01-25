#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

#define BLANK ' '
#define TAB '\t'
#define MAX74 50

long int pop74();
long int eval_pre74();
char infix[MAX74], prefix[MAX74];
long int stack[MAX74];
int top;
int isempty74();
int white_space74(char symbol);

void infix_to_prefix74();
int priority74(char symbol);
void push74(long int symbol);
long int pop74();
long int eval_pre74();

int l7q4()
{
        long int value;
        top = -1;
        printf("Enter infix : ");
        gets(infix);
        infix_to_prefix74();
        printf("prefix : %s\n",prefix);
        value=eval_pre74();
        printf("Value of expression : %ld\n",value);

        return 0;

}/*End of main()*/

void infix_to_prefix74()
{
        int i,j,p,n;
        char next ;
        char symbol;
        char temp;
        n=strlen(infix);
        p=0;

        for(i=n-1; i>=0; i--)
        {
                symbol=infix[i];
                if(!white_space74(symbol))
                {
                        switch(symbol)
                        {
                        case ')':
                                push74(symbol);
                                break;
                        case '(':
                                while( (next=pop74()) != ')')
                                        prefix[p++] = next;
                                break;
                        case '+':
                        case '-':
                        case '*':
                        case '/':
                        case '%':
                        case '^':
                                while( !isempty74( ) &&  priority74(stack[top])> priority74(symbol) )
                                        prefix[p++] = pop74();
                                push74(symbol);
                                break;
                        default: /*if an operand comes*/
                             prefix[p++] = symbol;
                        }
                }
        }
        while(!isempty74( ))
                prefix[p++] = pop74();
        prefix[p] = '\0'; /*End prefix with'\0' to make it a string*/

        for(i=0,j=p-1;i<j;i++,j--)
        {
                temp=prefix[i];
                prefix[i]=prefix[j];
                prefix[j]=temp;
        }
}/*End of infix_to_prefix74()*/

/* This function returns the priority74 of the operator */
int priority74(char symbol )
{
        switch(symbol)
        {
        case ')':
                return 0;
        case '+':
        case '-':
                return 1;
        case '*':
        case '/':
        case '%':
                return 2;
        case '^':
                return 3;
        default :
                 return 0;
        }/*End of switch*/
}/*End of priority74()*/

void push74(long int symbol)
{
        if(top > MAX74)
        {
                printf("Stack overflow\n");
                exit(1);
        }
        else
        {
                top=top+1;
                stack[top] = symbol;
        }
}/*End of push74()*/

long int pop74()
{
        if(top == -1 )
        {
                printf("Stack underflow \n");
                exit(2);
        }
        return (stack[top--]);
}/*End of pop74()*/
int isempty74()
{
        if(top==-1)
                return 1;
        else
                return 0;
}

int white_space74(char symbol)
{
        if(symbol==BLANK || symbol==TAB || symbol=='\0')
                return 1;
        else
                return 0;
}/*End of white_space74()*/

long int eval_pre74()
{
        long int a,b,temp,result;
        int i;

        for(i=strlen(prefix)-1;i>=0;i--)
        {
                if(prefix[i]<='9' && prefix[i]>='0')
                        push74( prefix[i]-48 );
                else
                {
                        b=pop74();
                        a=pop74();
                        switch(prefix[i])
                        {
                        case '+':
                                temp=b+a; break;
                        case '-':
                                temp=b-a;break;
                        case '*':
                                temp=b*a;break;
                        case '/':
                                temp=b/a;break;
                        case '%':
                                temp=b%a;break;
                        case '^':
                                temp=pow(b,a);
                        }
                        push74(temp);
                }
        }
        result=pop74();
        return result;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node73
{
 char data;
 struct Node73 *next;
}*top73=NULL;

void push73(char x)
{
 struct Node73 *t;
 t=(struct Node73*)malloc(sizeof(struct Node73));

 if(t==NULL)
 printf("stack is full\n");
 else
 {
 t->data=x;
 t->next=top73;
 top73=t;
 }

}

char pop73()
{
 struct Node73 *t;
 char x=-1;

 if(top73==NULL)
 printf("Stack is Empty\n");
 else
 {
 t=top73;
 top73=top73->next;
 x=t->data;
 free(t);
 }
 return x;
}

void Display73()
{
 struct Node73 *p;
 p=top73;
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
 printf("\n");
}

int pre73(char x)
{
 if(x=='+' || x=='-')
 return 1;
 else if(x=='*' || x=='/')
 return 2;
 return 0;
}

int isOperand73(char x)
{
 if(x=='+' || x=='-' || x=='*' || x=='/')
 return 0;
 else
 return 1;

}

char * InToPost73(char *infix)
{
 int i=0,j=0;
 char *postfix;
 int len=strlen(infix);
 postfix=(char *)malloc((len+2)*sizeof(char));

 while(infix[i]!='\0')
 {
 if(isOperand73(infix[i]))
 postfix[j++]=infix[i++];
 else
 {
 if(pre73(infix[i])>pre73(top73->data))
 push73(infix[i++]);
 else
 {
 postfix[j++]=pop73();
 }
 }
 }
 while(top73!=NULL)
 postfix[j++]=pop73();
 postfix[j]='\0';
 return postfix;
}


int l7q3()
{
 char *infix;
 printf("Enter the expression : ");
 fflush(stdin);
 scanf("%s",infix);
 fflush(stdin);

 push73('#');
// strrev(infix);
 char *postfix=InToPost73(infix);
// strrev(postfix);
 printf("%s          ( '#' indicates end of expression )",postfix);


 return 0;
}
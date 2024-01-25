#include <stdio.h>
#include <malloc.h>
 struct nodeh48{
    int data;
    struct nodeh48* next;
 }*headh48 =NULL,*tailh48 = NULL;

void printh48(struct nodeh48 *h)
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

 struct nodeh48 *getMiddleh48(struct nodeh48 *headh48)
 {
    if(headh48 == NULL  ||  headh48->next == NULL)
    {
        return headh48;
    }
    struct nodeh48 *slow = headh48, *fast = headh48;
    while(fast -> next != NULL  &&  fast -> next -> next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
 }

 struct nodeh48* reverseh48(struct nodeh48 *headh48)
 {
    struct nodeh48 *prev = NULL, *curr = headh48, *forward = NULL;
    while(curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
 }

int isPalindromeh48(struct nodeh48 *headh48)
{
    struct nodeh48 *middle = getMiddleh48(headh48);
    // printf("%d",middle->data);
    middle->next = reverseh48(middle->next);
    // printh48(headh48);
    // printf("\n");
    struct nodeh48 *head1 = headh48, *head2 = middle->next;
    while(head2 != NULL)
    {
        if(head1 -> data != head2 -> data)
        {
            return 0;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
    }
    middle -> next = reverseh48(middle->next);
    // printh48(headh48);
    return 1;
}

int h4q8()
{
    struct nodeh48 *curr;
    printf("\t\tCREATING THE LIST\n\n");
    int n;
    printf("ENTER NUMBER OF NODES : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : ");
    for(int i=0;i<n;i++)
    {
        curr= malloc(sizeof(struct nodeh48));
        curr -> next = NULL;
        scanf("%d",&curr->data);

        if(headh48 == NULL)
        {
            headh48 = tailh48 = curr;
        }
        else
        {
            tailh48 -> next = curr;
            tailh48 = curr;
        }
    }
    // isPalindromeh48(headh48);
    if(isPalindromeh48(headh48))
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
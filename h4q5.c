# include <stdio.h>
# include <stdlib.h>
struct nodeh45
{
    int data;
    struct nodeh45* next;
}*headh45 = NULL,*tailh45 = NULL;
void sorth45(int *a ,int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // for(int i=0;i<n;i++)
    // {
    //     printf("%d ",a[i]);
    // }
    // printf("\n");
}
void occurancehh45(struct nodeh45 *h,int n)
{
    int arr[n];
    struct nodeh45 *ptr = h;
    int i=0;
    while(ptr != NULL)
    {
        arr[i++] = ptr->data;
        ptr = ptr->next;
    }
    sorth45(arr,n);



    i = 0;
    int c=0, freq=0, ele=arr[0];
    while(c <= n-1)
    {
        freq = 0;
        while(arr[i] == ele && i<n)
        {
            freq++;
            i++;
        }
        printf("%d -> %d\n",ele,freq);
        ele = arr[i];
        c = c + freq;
    }
}
int h4q5()
{
    struct nodeh45 *curr;
    printf("\t\tCREATING THE LIST\n\n");
    int n;
    printf("ENTER NUMBER OF NODES : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : ");
    for(int i=0;i<n;i++)
    {
        curr= malloc(sizeof(struct nodeh45));
        curr -> next = NULL;
        scanf("%d",&curr->data);

        if(headh45 == NULL)
        {
            headh45 = tailh45 = curr;
        }
        else
        {
            tailh45 -> next = curr;
            tailh45 = curr;
        }
    }
    occurancehh45(headh45,n);
    return 0;
}
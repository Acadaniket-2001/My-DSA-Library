#include <stdio.h>
int l9q1()
{
    int n;
    printf("Enter the number of elements  : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }
    int x,flag = 0 ;
    printf("Enter the value to search :");
    scanf("%d",&x);
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i] == x)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("%d is present at index : %d\n",x,i);
    }
    else
    {
        printf("%d is not present in the array.\n",x);
    }
    return 0;
}
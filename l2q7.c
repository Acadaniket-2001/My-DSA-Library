#include <stdio.h>
#include <malloc.h>

int l2q7()
{
    int a[]={1,3,6,5,2,0,5,-1},sum1=0,sum2=0;
    int s = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<s;i++)
    {
        sum1 = sum1 + a[i];
    }
    int n;
    printf("ENTER NO. OF ELEMENTS\n");
    scanf("%d",&n);
    int *p = (int *)malloc(n * sizeof(int));           //allocating dynamic array
    printf("ENTER THE ELEMENTS\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum2 = sum2 + *(p+i);
    }
    
    printf("THE SUM OF EXISTING ARRAY {1,3,6,5,2,0,5,-1} AND THE NEWLY ENTERED ARRAY IS  %d",sum1+sum2);

    return 0;
}

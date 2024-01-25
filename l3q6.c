#include <stdio.h>
#include <malloc.h>
int max(int *p , int n)
{
    if(n==1)
    {
        return *p;
    }
    else
    {
        return (*p > max( (p+1) , n-1) ? *p : max( (p+1) , n-1) );
    }
}
int l3q6()
{
    int n;
    printf("ENTER NO. OF ELEMENTS\n");
    scanf("%d",&n);
    int *p = (int *)malloc(n*sizeof(int));
    printf("ENTER THE ELEMENTS\n");
    for( int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("THE MAXIMUM ELEMENT IS :  %d",max(p,n) );
    free(p);
    return 0;
}

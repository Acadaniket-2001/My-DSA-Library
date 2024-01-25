#include <stdio.h>

int * sort92(int *a , int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return a;
}

int l9q2()
{
    int n;
    printf("Enter the number of elements  : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }
    sort92(a,n);
    int x;
    printf("Enter the value to search :");
    scanf("%d",&x);

    int l = 0 , h = n-1,mid;
    while(l <= h)
    {
        mid = (l+h)/2;
        if(a[mid] == x)
        {
            printf("Element Found\n");
            return 0;
        }
        else if(x < a[mid])
        {
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    printf("Element Not Found\n ");


    return 0;
}
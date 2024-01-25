#include <stdio.h>
#include <stdlib.h>

void merge104(int *a,int l,int mid,int h)    // l and h are not first and last index of array
{                                            // but are the bounds of sub_array of array 'a' which is to be merge104d
    int i,j,k;
    int b[h-l+1];
    i = l;
    j = mid+1;
    k = 0;                                // for descending order --------->  k = h-l;
    while(i <= mid  &&  j <= h)       //     |
    {                                 //     |
        if(a[i]<a[j])                 //     |
        {                             //     |
            b[k++] = a[i++];              // b[k--] = a[i++];
        }                             //     |
        else                          //     |
        {                             //     |
            b[k++] = a[j++];              // b[k--] = a[j++];
        }
    }
    while(i <= mid)
    {
        b[k++] = a[i++];                 // b[k--] = a[i++];
    }
    while(j<=h)
    {
        b[k++] = a[j++];                 // b[k--] = a[j++];
    }
    for(i=l;i<=h;i++)
        a[i] = b[i-l];
}

void Merge104_sort(int *a, int l,int h)
{
    if(l<h)
    {
        int mid = (l+h)/2;
        Merge104_sort(a,l,mid);
        Merge104_sort(a,mid+1,h);
        merge104(a,l,mid,h);
    }
}

int l10q4()
{
    // int a[5] = {1,4,7,8,343};

int *a;
    int n;
    printf("Enter the number of elements : ");
    scanf("%d" ,&n);
    a = malloc(sizeof(int)*n);
    printf("Enter the elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }

    Merge104_sort(a,0,n-1);
    printf("Sorted array is : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void Ins_Sort103(int *a , int n)
{
    for(int i=1;i<n;i++)
    {
        int temp = a[i];
        int j = i-1;
        while(j>=0  &&  a[j]<temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}

int l10q3()
{
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
    
    Ins_Sort103(a,n);
    printf("Sorted array is :");
    for(int i=0;i<n;i++)
    {
        printf("%d " ,a[i]);
    }
    return 0;

}
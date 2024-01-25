#include <stdio.h>
#include <stdlib.h>

void Sel_Sort102(float *a , int n)
{
    for(int i=0;i<n-1;i++)
    {
        int j,k;
        for(j=k=i;j<n;j++)
        {
            if(a[j] < a[k])
            {
                k = j;
            }
        }
        float temp = a[k];
        a[k] = a[i];
        a[i] = temp;
    }    
}

int l10q2()
{
    float *a;
    int n;
    printf("Enter the number of elements : ");
    scanf("%d" ,&n);
    a = malloc(sizeof(float)*n);
    printf("Enter the elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%f",(a+i));
    }
    
    Sel_Sort102(a,n);
    printf("Sorted array is :");
    for(int i=0;i<n;i++)
    {
        printf("%f " ,a[i]);
    }
    return 0;

}
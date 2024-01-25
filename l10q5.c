#include <stdio.h>
#include <stdlib.h>

void swap105(double *a,double *b)
{
    double temp = *a;
    *a = *b;
    *b = temp;
}

int Partition105(double *a , int l ,int h)
{
    double pivot = a[l];
    int i = l, j = h;
    while(i<j)
    {
        while(a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if(i<j)                    //  why ??????? ----------->
            swap105(&a[i], &a[j]);
    }
    swap105(&a[l], &a[j]);         // why not  swap105(&pivot , &a[j]);----------->
    //  this is becoz pivot temporary variable hai so swap105 karenge to pivot variable  se swap105 hoga na ki array element se
    return j;
}

void Quick_sort105(double *a ,int l,int h)
{
    // int j;
    if(l<h)
    {
        int j = Partition105(a,l,h);
        Quick_sort105(a,l,j-1);
        Quick_sort105(a,j+1,h);
    }
}

int l10q5()
{
    // int a[5] = {1,23,45,2,6};

    double *a;
    int n;
    printf("Enter the number of elements : ");
    scanf("%d" ,&n);
    a = malloc(sizeof(double)*n);
    printf("Enter the elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%lf",(a+i));
    }

    Quick_sort105(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%lf\t",a[i]);
    }
    return 0;
}
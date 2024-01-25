#include <stdio.h>

int search93(int *a,int n,int hunt)
{
    // int n = sizeof(a)/sizeof(int);
    // printf("%d\n",n);
    for(int i=0;i<n;i++)
    {
        if(a[i] == hunt)
        {
            return 1;
        }
    }
    return 0;
}

int l9q3()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    // a[0] = 1;
    // a[1] = 2;
    // a[2] = 3;
    // a[3] = 4;
    // a[4] = 12;

    int hunt;
    printf("Enter hunt : ");
    scanf("%d",&hunt);
    if(search93(a,n,hunt))
    {
        while(search93(a,n,hunt))
        {
            hunt *= 3;
        }
        printf("New hunt = %d\n" , hunt);
    }
    else
    {
        printf("Hunt not found in array.\n");
    }
    return 0;
}
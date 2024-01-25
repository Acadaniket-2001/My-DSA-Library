#include<stdio.h>

typedef struct
{
    int d,m,y;
}Date;

void swap101(Date *a , Date *b)
{
    Date temp = *a;
    *a = *b;
    *b = temp;
}

int val101(Date a)
{
    /*total days in the given date*/
    return  a.y*365 + a.m*30 + a.d;
}

void Bubble_sort101(Date *a ,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(val101(a[j]) > val101(a[j+1]))
                swap101(&a[j],&a[j+1]);
        }
    }
}

int l10q1()
{
    int n;
    printf("Enter the number of dates : ");
    scanf("%d",&n);
    Date a[n];
    printf("Enter the dates (DD MM YYYY): \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d",&a[i].d , &a[i].m , &a[i].y);
    }
    Bubble_sort101(a,n);
    printf("THE SORTED DATES ARE :-\n\n");
    for(int i=0;i<n;i++)
    {
        printf("%d-%d-%d",a[i].d,a[i].m,a[i].y);
        printf("\n");
    }


    return 0;
}
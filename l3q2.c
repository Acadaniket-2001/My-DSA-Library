#include<stdio.h>
#include<math.h>
#include<malloc.h>
int l3q2()
{
    int deg1,deg2,x,count1=0,count2=0;
    printf("ENTER DEGREE 1 and DEGREE 2\n");
    scanf("%d%d",&deg1,&deg2);
    int *p1 = (int *)malloc(deg1*sizeof(int));
    int *p2 = (int *)malloc(deg2*sizeof(int));
    printf("ENTER COEFFICIENTS of polynomial 1 IN DECREASING ORDER OF TERMS\n");
    for(int i=deg1;i>=0;i--)
    {
        scanf("%d",(p1+i));
    }
    printf("ENTER COEFFICIENTS of polynomial 2 IN DECREASING ORDER OF TERMS\n");
    for(int i=deg2;i>=0;i--)
    {
        scanf("%d",(p2+i));
    }
   int min = (deg1 > deg2 ? deg2 : deg1);
    for(int i=0;i<=min;i++)
    {
        if(min==deg1)
        {
            p2[i] = p2[i] + p1[i];
            count2++;
        }
         else
        {
            p1[i] = p1[i] + p2[i];
            count1++;
        }
    }
    if(count2 != 0)
    {
        for(int i=deg2;i>=0;i--)
        {
            printf("(%d) x^%d +",p2[i],i);
        }
    }
    if(count1 != 0)
    {
        for(int i=deg1;i>=0;i--)
        {
            printf("(%d)x^%d + ",p1[i],i);
        }
    }
    printf("\b\b");
    free(p1);
    free(p2);
    return 0;
}

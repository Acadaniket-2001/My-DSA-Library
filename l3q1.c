#include<stdio.h>
#include<math.h>
#include<malloc.h>
int l3q1()
{
    int deg,x,res=0;
    printf("ENTER DEGREE\n");
    scanf("%d",&deg);
    int *p = (int *)malloc(deg*sizeof(int));
    printf("ENTER COEFFICIENTS IN DECREASING ORDER OF TERMS\n");
    for(int i=deg;i>=0;i--)
    {
        scanf("%d",(p+i));
    }
    printf("ENTER X\n");
    scanf("%d",&x);
    for(int i=0;i<=deg;i++)
    {
        res = res + p[i]*pow(x,i);
    }
    printf("THE VALUE IS\t%d",res);
    free(p);
    return 0;
}

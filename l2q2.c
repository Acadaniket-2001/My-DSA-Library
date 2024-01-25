#include <stdio.h>
struct distances
{
    int km,m;
}d1,d2,res;

void sum1(struct distances d1,struct distances d2,struct distances res)
{
    res.km = d1.km + d2.km;
    res.m  = d1.m + d2.m;
    if(res.m >= 1000)
    {
        res.m = res.m%1000;
        res.km++;
    }
    printf("SUM1 OF THE DISANCES IS %d km %d m",res.km,res.m);
}
int l2q2()
{
    printf("ENTER DISTANCE 1 (km and m)\n");
    scanf("%d%d",&d1.km,&d1.m);
    printf("ENTER DISTANCE 2 (km and m)\n");
    scanf("%d%d",&d2.km,&d2.m);
    sum1(d1,d2,res);
    
    return 0;
}
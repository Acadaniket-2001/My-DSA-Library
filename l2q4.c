#include <stdio.h>
struct comp
{
    int a1,a2,b1,b2;
}c;

void sum(struct comp c)
{
    printf("THE SUM IS ( %d + i%d )\n",c.a1+c.a2,c.b1+c.b2);
    
}
int l2q4()
{
    printf("ENTER FIRST NUMBER (REAL,IMAGINARY)\n");
    scanf("%d%d",&c.a1,&c.b1);
    printf("ENTER SECOND NUMBER (REAL,IMAGINARY)\n");
    scanf("%d%d",&c.a2,&c.b2);
    sum(c);
    return 0;
}

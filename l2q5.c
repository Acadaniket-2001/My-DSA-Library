#include <stdio.h>
#include <math.h>
struct time
{
    int h1,h2,m1,m2,s1,s2;
}t;
int l2q5()
{
    int h3,m3,s3,tot_s;
    printf("ENTER FIRST TIME (HH:MM:SS)\n");
    scanf("%d%d%d",&t.h1,&t.m1,&t.s1);
    int tot_s1 = (t.h1*3600) + (t.m1)*60 + (t.s1);
    printf("ENTER SECOND TIME (HH:MM:SS)\n");
    scanf("%d%d%d",&t.h2,&t.m2,&t.s2);
    int tot_s2 = (t.h2*3600) + (t.m2)*60 + (t.s2);
    tot_s = fabs(tot_s2 - tot_s1);
    h3=tot_s/3600;
    tot_s = tot_s % 3600;
    m3=tot_s/60;
    tot_s = tot_s % 60;
    s3 = tot_s;
    printf("\n\nTHE DIFFERENCE TIME PERIOD IS  (%d : %d : %d)",h3,m3,s3);
    return 0;
}
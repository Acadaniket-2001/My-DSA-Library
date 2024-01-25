#include <stdio.h>

int l1q5()
{
    int n;
    printf("ENTER N\n");
    scanf("%d",&n);
    int a[n],t=0;
    printf("ENTER THE ELEMENTS\n");
    while(t != n){
        scanf("%d",&a[t++]);
    }
    int flag=0;
    int max,min;
    printf("ENTER MIN and MAX\n");
    scanf("%d%d",&min,&max);
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>=min && a[i]<=max){
           flag++;
        }
    }
    printf("THE NUMBER OF ELEMENTS IN BETWEEN is\t%d",flag);
    return 0;
}
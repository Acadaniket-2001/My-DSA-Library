#include <stdio.h>

int h2q4()
{
    int n;
    printf("ENTER N\n");
    scanf("%d",&n);
    int a[n],i=0,j,k,temp;
    printf("ENTER THE ELEMENTS\n");
    while(i != n){
        scanf("%d",&a[i++]);
    }
    int max=a[0],count=0;;
    for(int j=0;j<n;j++)
    {
        if(max<a[j])
        {
            max=a[j];
            count=1;
        }
        if(max==a[j])
        {
            count++;
        }
    }
    if(max != a[0])                       // this is done becoz max is initialised with a[0]
    {
        count--;
    }
    printf("MAXIMUM ELEMENT IS\t%d\nFREQUENCY IS\t%d",max,count);   

    return 0;
}
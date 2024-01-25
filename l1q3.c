#include <stdio.h>

int l1q3()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    int a[n],t=0,temp,flag=0;
    while(t != n){
        scanf("%d",&a[t++]);
    }
    printf("enter element to search\n");
    scanf("%d",&temp);
    for(int i=0;i<n;i++){
        if(temp==a[i]){
            flag=1; break;
        }
    }
    if(flag==1)
        printf("element found");
    else
        printf("element not found");

    return 0;
}

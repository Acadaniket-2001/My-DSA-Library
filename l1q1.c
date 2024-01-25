#include <stdio.h>

int l1q1()
{
    int n;
    printf("Enter number of elements :");
    scanf("%d",&n);
    int a[n],i=0;
    printf("Enter the elements : ");
    while(i != n){
        scanf("%d",&a[i++]);
    }
    
    int min=a[0],max=a[0];
    for(int j=0;j<n;j++){
        if(max <= a[j]){
            max= a[j];
        }
    }
    
    for(int j=0;j<n;j++){
        if(min >= a[j]){
            min= a[j];
        }
    }
    
    printf("MAX is %d \nMIN is %d\n",max,min);

    return 0;
}
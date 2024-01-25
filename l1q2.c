#include <stdio.h>

int l1q2()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
     printf("Enter the elements : ");
    int a[n],t=0,temp;
    while(t != n){
        scanf("%d",&a[t++]);
    }
    for(int i=0;i<n/2;i++){
        temp =a[i];
       a[i]= a[n-1-i] ;
        a[n-1-i]= temp;
    }
    
    printf("Reversed array is : ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
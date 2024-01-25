#include <stdio.h>

int l1q4()
{
    int n;
    printf("ENTER N\n");
    scanf("%d",&n);
    int a[n],t=0;
    printf("ENTER THE ELEMENTS\n");
    while(t != n){
        scanf("%d",&a[t++]);
    }
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("THE SORTED ARRAY IS \n");
    for( int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
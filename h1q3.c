#include <stdio.h>

int h1q3()
{
    int n;
    printf("ENTER N\n");
    scanf("%d",&n);
    int a[n],i=0,j,k,max;
    printf("ENTER THE ELEMENTS\n");
    while(i != n){
        scanf("%d",&a[i++]);
    }
    for(j=0;j<n;j++){
        if(j <= n-1){
            max=a[j+1];
            for(k=j+1;k<n;k++){
                if(max < a[k]){
                    max=a[k];
                }
            }
            a[j]=max;
        }  
        if(j==n-1){
            a[j]=-1;
        }
    }
    printf("THE NEW ARRAY IS\n");
   for(int t=0;t<n;t++){
       printf("%d ",a[t]);
   }
    return 0;
}




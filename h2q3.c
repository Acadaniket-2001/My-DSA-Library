#include <stdio.h>

int h2q3()
{
    int n;
    printf("ENTER N\n");
    scanf("%d",&n);
    int a[n],i=0,j,k,temp;
    printf("ENTER THE ELEMENTS\n");
    while(i != n){
        scanf("%d",&a[i++]);
    }
    for(j=0;j<n;j++){
       if(a[j]%2==1){
           for(k=j+1;k<n;k++){
               if(a[k]%2==0){
                   temp=a[k];
                   a[k]=a[j];
                   a[j]=temp;
                    break;
                   
               }
           }
           
       }
       
    }
    printf("THE NEW ARRAY IS\n");
   for(int t=0;t<n;t++){
       printf("%d ",a[t]);
   }
    return 0;
}


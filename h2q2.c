#include <stdio.h>

int h2q2()
{
    int n,p_copy,pass_var;
    printf("ENTER N\n");
    scanf("%d",&n);
    int a[n],i=0;
    printf("ENTER THE ELEMENTS\n");
    while(i != n){
        scanf("%d",&a[i++]);
    }
    for(int j=0;j<n;j++){               //time complexity is O(n)
        if(j==0){                       // auxiliary space is O(1)
            p_copy=a[0];
            a[0]=a[0]*a[1];
        }
        if(j>0 && j<n-1){
            pass_var=a[j];
            a[j]=a[j+1]*p_copy;
            p_copy = pass_var;
        }
        if(j==n-1){
            a[j]=a[j]*p_copy;
        }
    }
    printf("THE NEW ARRAY IS\n");
    for( int k=0;k<n;k++){
        printf("%d ",a[k]);
    }

    return 0;
}
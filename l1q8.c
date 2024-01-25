#include <stdio.h>

int l1q8()
{
    int n,x,y,dist;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int a[n],s=0;
    printf("Enter the elements : ");
    while(s != n){
        scanf("%d",&a[s++]);
    }
    printf("ENTER X and Y\n");                   // Time Complexity is O(n^2)
    scanf("%d%d",&x,&y);
    int sum=x+y,min=n-1;
    for(int i=0;i<n;i++){
        if(a[i]==x || a[i]==y){
            for(int j=i+1;j<n;j++){
                if(a[j]==sum-a[i]){
                    dist=j-i;
                    if(min>dist){
                        min=dist;
                        break;
                    }
                }
            }
        }
    }
    printf("THE MINIMUM DISTANCE BETWEEN X and Y IS %d",min);
    return 0;
}

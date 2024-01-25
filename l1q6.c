#include <stdio.h>

int l1q6()
{
    int n;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int NGE=-1,x;
    // printf("Array taken is : {2,5,3,9,7}");
    printf("\nEnter X :");
    scanf("%d",&x);
    for(int i=0;i<5;i++){
        if(a[i]==x){
            for(int j=i+1;j<5;j++){
                if(a[j]>x){
                    printf("NGE is %d",a[j]);
                    goto y;
                }
            }
        }
    }
    printf("%d",NGE);
 y:   return 0;
}
#include <stdio.h>

int l1q7()
{
//    int a[3][3]={1,0,2,0,1,3,3,1,2};
    int n;
    printf("Enter the order of matrix :");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the elements :");
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j =0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
   int noz=0,sum=0,prod=1;
   printf("ELEMENTS BELOW THE MINOR DIAGONAL ARE\n");
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
            if(a[i][j])
                noz++;
            if(j>i)
                sum = sum + a[i][j];
            if(i==j || i+j==2)
                prod = prod * a[i][j];
            if(i+j>=3)
            printf("%d  ",a[i][j]);
       }
   }
    printf("\n");
    printf("NUMBER OF NON-ZERO ELEMENT IS %d\nSUM OF ELEMENTS ABOVE MAIN DIAGONAL IS %d\n",noz,sum);
    printf("PRODUCT OF THE DIAGONAL ELEMENTS IS %d",prod);
    return 0;
}
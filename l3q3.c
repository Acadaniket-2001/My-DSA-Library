#include <stdio.h>
#include <malloc.h>
int l3q3()
{
    int m,count=0,n;
    printf("ENTER THE DIMENSIONS OF MATRIX(rows and columns)\n");
    scanf("%d%d",&m,&n);
    int **b = (int **)malloc(m*sizeof(int *));
    for(int i=0;i<m;i++)
    {
        b[i]=(int *)malloc(n*sizeof(int));
    }
    printf("ENTER THE ELEMENTS IN ROW MAJOR FASHION\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[i][j]==0)
            {
                count++;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        free(b[i]);
    }
    free(b);
    if( count>0.5*(m*n) )
    {
        printf("Yes , the matrix is a sparse matrix\n");
    }
    else
        printf("No , the matrix is not a sparse matrix\n");
    return 0;
}
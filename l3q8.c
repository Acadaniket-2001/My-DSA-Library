#include <stdio.h>
#include <malloc.h>

int l3q8()
{
     int n,flagU=0,flagL=0,flagT=0;
    printf("ENTER ORDER OF THE SQUARE MATRIX\n");
    scanf("%d",&n);
    
    /* allocating 2D array dynamically */
     
    int **b = (int **)malloc(n*sizeof(int *));
    for(int i=0;i<n;i++)
    {
        b[i] = (int *)malloc(n*sizeof(int));
    }
    
    /* accepting values of the matrix */
    
    printf("ENTER THE VALUES OF MATRIX IN ROW MAJOR FASHION\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
    /* checking if upper,lower or tri-digonal matrix or not */
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>j && b[i][j]!=0)
            {
                flagU=1;
            }
            if(i<j && b[i][j]!=0)
            {
                flagL=1;
            }
            if(i==j || i==j+1 ||i==j-1)
            {
                if(b[i][j]==0)
                {
                    flagT=1;
                }
            }
        }
    }
    printf("\n\n");
    
    /* printing the type of matrix */
    
    printf("THE GIVEN MATRIX IS :\t");
    
    if(flagU==0)
    {
        printf("UPPER TRIANGULAR MATRIX\n");
    }
    if(flagL==0)
    {
        printf("LOWER TRIANGULAR MATRIX\n");
    }
    if(flagT==0)
    {
        printf("TRI-DIAGONAL MATRIX\n");
    }    
    for(int i=0;i<n;i++)
    {
        free(b[i]);
    }
    free(b);
    return 0;
}
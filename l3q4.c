#include <stdio.h>
#include<malloc.h>

int l3q4()
{
    int o;
    printf("ENTER ORDER OF THE SQUARE MATRIX\n");
    scanf("%d",&o);
    
    /* allocating 2D array dynamically */
    
    int **b = (int **)malloc(o*sizeof(int *));
    for(int i=0;i<o;i++)
    {
        b[i] = (int *)malloc(o*sizeof(int));
    }
    
    /* accepting values of the matrix */
    
    printf("ENTER THE VALUES OF MATRIX IN ROW MAJOR FASHION\n");
    for(int i=0;i<o;i++)
    {
        for(int j=0;j<o;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
    /*  finding the transpose */
    
    for(int i=0;i<o;i++)
    {
        for(int j=0;j<o;j++)
        {
            if(i>j)
            {
                int temp = b[i][j];
                b[i][j] = b[j][i];
                b[j][i] = temp;
            }
        }
    }
    
    /* printing the transpose matrix */
    
    for(int i=0;i<o;i++)
    {
        for(int j=0;j<o;j++)
        {
           printf("%d\t",b[i][j]);
        }
         printf("\n");
    }
    
    /* deallocating the 2D array */
    
    for(int i=0;i<o;i++)
    {
        free(b[i]);
    }
    free(b);

    return 0;
}
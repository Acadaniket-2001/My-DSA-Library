#include <stdio.h>
#include <malloc.h>

int l3q7()
{
    int n;
    printf("ENTER SIZE OF ARRAY\n");
    scanf("%d",&n);
    
    /* allocating array dynamically */
    
    int *arr = (int *)malloc(n*sizeof(int));
    
    
    /* accepting values of the matrix */
    
    
    printf("ENTER THE ELEMENTS\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    /* creating array of distinct elements */
    
    int *t_arr = (int *)malloc(sizeof(int));
    int size=1,flag=0,count;
    *t_arr = arr[0];

    for(int i=0;i<n;i++)
    {
        flag=0;
        for(int j=0;j<size;j++)
        {
            if(*(t_arr+j) == arr[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            t_arr = (int *)realloc(t_arr , (size+1)*sizeof(int) );
            size++;
            *(t_arr+size-1)=arr[i];
        }
    }
    
    /*
    for( int i=0;i<size;i++)
    {   
        printf("%d\t",*(t_arr+i));
    }
    */
    
    /* printing elements and their frequency */
    
    printf("\nELEMENT   FREQUENCY\n");
    for( int i=0;i<size;i++)
    {   
        count=0;
        for(int j=0;j<n;j++)
        {
            if( *(t_arr+i) == arr[j] )
            {
                count++;
            }
        }
        printf("%d\t\t%d\n",*(t_arr+i),count);
    }
    
    /* deallocating the arrays */
    
    free(t_arr);
    free(arr);
    return 0;
}
#include <stdio.h>
int det(int *p,int ord)
{
    int res=0;
    
    if(ord==1)
    {
        return *p;
    }
    else
    {
        int temp_arr[ord-1][ord-1];
        int *temp_ptr = &temp_arr[0][0];
        int (*new_ptr)[ord] = (int (*)[ord])p;
        
        for (int k=0;k<ord;k++)
        {
            for (int i=0;i<ord;i++)
            {
                for (int j=0;j<ord;j++)
                {
                    if(i != 0 && j != k)
                    {
                        *temp_ptr = new_ptr[i][j];
                        temp_ptr++;
                        if( temp_ptr == ( *temp_arr + (ord-1)*(ord-1) )  )
                        {
                            temp_ptr = &temp_arr[0][0];
                        }
                    }
                }
            }
            if(k%2==0)
            {
                res = res + new_ptr[0][k] * det(temp_ptr,ord-1);
                //printf("%d\n",res);
            }
            else
            {
                res = res - new_ptr[0][k] * det(temp_ptr,ord-1);
                //printf("%d\n",res);
            }
        }
        return res;
    }
}
int l3q5()
{
    int ord;
    printf("ENTER ORDER OF MATRIX\n");
    scanf("%d",&ord);
    int a[ord][ord];
    printf("ENTER THE ELEMENTS IN ROW-MAJOR FASHION\n");
    for(int i=0;i<ord;i++)
    {
        for(int j=0;j<ord;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
//    int f_res = det(*a,ord);
    printf("THE DETERMINANT IS :  %d", det(*a,ord)  );
    return 0;
}
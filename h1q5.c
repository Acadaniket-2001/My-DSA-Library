#include <stdio.h>

int h1q5()
{
    int m,n;
    printf("ENTER NO. OF ROWS AND COLUMNS\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("ENTER THE ELEMENTS IN ROW-WISE\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
     printf("THE ENTERED ARRAY IS\n");
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[i][k]<a[i][j]){
                    int temp=a[i][k];
                    a[i][k]=a[i][j];
                    a[i][j]=temp;
                }
            }
        }
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            for(int k=i+1;k<m;k++){
                if(a[k][j]>a[i][j]){
                    int temp=a[k][j];
                    a[k][j]=a[i][j];
                    a[i][j]=temp;
                }
            }
        }
    }
    printf("THE SORTED ARRAY IS\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
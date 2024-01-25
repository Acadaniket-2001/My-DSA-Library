#include <stdio.h>

struct emp{
    char name[20];
    char gender,desi[15];
    float BP,GP;
    };
int l2q1()
{
    int n;
    printf("ENTER NUMBER OF EMPLOYEES\n");
    scanf("%d",&n);
    struct emp e[n];
    printf("ENTER THE DETAILS\n");
    for(int i=0;i<n;i++)
    {
        printf("\t\tEMPLOYEE %d\n",i+1);
        printf("ENTER NAME\t\t");
        scanf(" %[^\n]s",e[i].name);
        printf("ENTER GENDER (M/F)\t\t");
        scanf(" %c",&e[i].gender);
        printf("ENTER DESIGNATION\t\t");
        scanf(" %[^\n]s",e[i].desi);
        printf("ENTER BASIC PAY\t\t");
        scanf("%f",&e[i].BP);
        e[i].GP = 2*e[i].BP;
        
    }
    printf("\n\n");
    printf("\n\n\t\t\tTHE DETAILS ARE:-\n");
     printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%s\t\t%c\t\t%s\t\tBASIC PAY= %f\t\tGROSS PAY= %f\n",e[i].name,e[i].gender,e[i].desi,e[i].BP,e[i].GP);
    }

    return 0;
}
#include <stdio.h>

struct stu{
    int roll;
    char name[20];
    int class;
    float t_marks;
    }s[10];
int l2q3()
{
    printf("ENTER STUDENT DETAILS\n");
    for(int i=0;i<10;i++)
    {
        printf("\t\tSTUDENT %d\n",i+1);
        printf("ENTER NAME\t\t");
        scanf(" %[^\n]s",s[i].name);
        printf("ENTER ROLL NO.\t\t");
        scanf("%d",&s[i].roll);
        printf("ENTER CLASS\t\t");
        scanf("%d",&s[i].class);
        printf("ENTER TOTAL MARKS\t\t");
        scanf("%f",&s[i].t_marks);
    }
    printf("\n\n");
    printf("\n\n\t\t\tTHE DETAILS ARE:-\n");
    printf("\n");
    printf("ROLL\tNAME\tCLASS\tTOTAL MARKS\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t%s\t%d\t%f\n",s[i].roll,s[i].name,s[i].class,s[i].t_marks);
    }

    return 0;
}


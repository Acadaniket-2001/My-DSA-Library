#include <stdio.h>
#include <string.h> 
 int count=1;
void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *a, int i, int n)
{
    int j;
    if (i == n)
    {
        printf("%d. %s\n", count++, a);
    }
    else 
    {
        for (j = i; j <= n; j++)
        {
            swap(&a[i], &a[j]);
            permute(a, i + 1, n);
            swap(&a[i], &a[j]); 
        }
    }
    return;
}
 
int h2q1()
{
    char str[20];
    int n;
    printf("ENTER THE STRING\t");
    scanf("%s", str);
    n = strlen(str);
    printf("TOTAL PERMUTATIONS ARE  (%d!)\n",n);
    printf("THE PERMUTATIONS ARE\n"); 
    permute(str, 0, n - 1);
    return 0;
}

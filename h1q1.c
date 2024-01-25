#include <stdio.h>

int h1q1()
{
    int n;
    printf("ENTER N\n");
    scanf("%d",&n);
    int a[n],i=0;
    printf("ENTER THE ELEMENTS\n");
    while(i != n){
        scanf("%d",&a[i++]);
    }
  int temp;
  for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
          if(a[i]>a[j]){
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
      }
  }
printf("THE SECOND LARGEST AND SECOND SMALLEST ELEMENTS ARE %d AND %d",a[n-2],a[1]);
    return 0;
}

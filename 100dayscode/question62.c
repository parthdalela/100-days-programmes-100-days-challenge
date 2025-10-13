#include<stdio.h>
int main()
{
    int n,t;
    printf("enter the size of an array = ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array = ");
    for(int i=0;i<n;i++)
 {
    scanf("%d",&arr[i]);
  }
   for(int j=0;j<=(int)(n/2);j++)
  {
    t=arr[n-j-1];
    arr[n-j-1]=arr[j];
    arr[j]=t;
  }
  printf("reversed array\n");
   for(int i=0;i<n;i++)
  {
    printf("%d\t",arr[i]);
  }
  return 0;
}
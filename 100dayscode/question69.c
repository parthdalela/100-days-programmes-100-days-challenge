#include<stdio.h>
int main()
{
    int n,element;
    printf("enter the size of array = ");
    scanf("%d",&n);
    printf("enter the elements of array = ");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
  for(int i=0;i<n;i++)
  {
    if(arr[i]>arr[i+1])
    {
        int t =arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=t;
    }
  }
  printf("second largest number is = %d",arr[n-2]);
  return 0;
}
#include<stdio.h>
int main()
{
  int n,element;
  printf("enter the size of an array = ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    printf("enter the element of array = ");
    scanf("%d",&arr[i]);
  }
  printf("enter an element of array to know it's index = ");
  scanf("%d",&element);
  printf("%d",arr[element]);
  return 0;
}
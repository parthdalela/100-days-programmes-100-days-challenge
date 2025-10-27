/*Find the digit that occurs the most times in an integer number.*/
#include<stdio.h>
int main()
{
  int n;
  printf("enter number of digits of a number = ");
  scanf("%d",&n);
  printf("enter the digits of the number = ");
  int arr[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++)
  {
    int count=1;
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]==arr[j])
      {
        count++;
      }
    }
    printf("the digit %d occurs %d times\n",arr[i],count);
  }  return 0;
}


/*Find the sum of main diagonal elements for a square matrix.*/
#include<stdio.h>
int main()
{
  int m,n;
  printf("enter  number of rows = ");
  scanf("%d",&m);   
  printf("enter  number of columns = ");
  scanf("%d",&n);
  int arr[m][n];
  printf("enter elements of the matrix = ");
  for( int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      scanf("%d",&arr[i][j]);
    } 
  }
    int sum=0;
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
      {
        if(i==j)
        {
          sum=sum+arr[i][j];
        }
      }
    }
    printf("sum of main diagonal elements is %d",sum);
}
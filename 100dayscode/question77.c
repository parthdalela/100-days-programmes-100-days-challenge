/*Check if the elements on the diagonal of a matrix are distinct.*/
#include<stdio.h>
int main()
{
  int m,n,count=0;
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
  for(int i=1;i<m;i++)
  {
    for(int j=i;j<n;j++)
    {
       if(arr[i][j]==arr[i+1][j+1])
       {
        printf("elements are not distinct");
        break;
       }
       else{
        count++;
        continue;
       }
    }
  }
  if(count==3)
  {
    printf("elements of diagnol of matrix are distinct");
  }
}
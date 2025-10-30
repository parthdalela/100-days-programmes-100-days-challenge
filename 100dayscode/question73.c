#include<stdio.h>
int main()
{
    int p,q;
    printf("enter number of rows of matrix = ");
    scanf("%d",&p);
    printf("enter number of columns of matrix = ");
    scanf("%d",&q);
    printf("enter the elements of matrix : \n");
    int arr[p][q];
    for(int i=1;i<=p;i++)
    {
        for(int j=1;j<=q;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
   for(int i=1;i<=p;i++)
   {
    for(int j=1;j<=q;j++)
    {
        sum=sum+arr[i][j];
    }
   }
   printf("the sum of all elements of matrix are = %d",sum);
   return 0;
}
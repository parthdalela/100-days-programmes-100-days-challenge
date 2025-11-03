/*Multiply two matrices.*/
#include<stdio.h>
int main()
{
  int m,n,p,q;
  printf("enter rows of first matrix =");
  scanf("%d",&m);
  printf("enter columns of first matrix =");
  scanf("%d",&n);
  printf("enter elements of matrix one = ");
    int arr[m][n];
  for(int i=1;i<=m;i++)
  {
     for(int j=1;j<=n;j++)
     {
        scanf("%d",&arr[i][j]);
     }
  }
    printf("enter rows of second matrix =");
    scanf("%d",&p);
    printf("enter columns of second matrix =");
    scanf("%d",&q);
    printf("enter elements of matrix second = ");
     int arr2[m][n];
     for(int i=1;i<=m;i++)
  {
     for(int j=1;j<=n;j++)
     {
        scanf("%d",&arr2[i][j]);
     }
  }
    int arr3[m][q];
    if(n==p)
    {
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=q;j++)
            {
               for(int k=1;k<=n;k++)
               {
                  arr3[i][j]=arr3[i][j]+arr[i][k]+arr2[k][i];
               }
            }
        }
         printf("Matrix A : \n");
       for (int i = 1; i <= m; i++)
       {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
        }
       printf("Matrix B : \n");
       for (int i = 1; i <= p; i++)
       {
        for (int j = 1; j <= q; j++)
        {
            printf("%d ", arr2[i][j]);
        }
           printf("\n");
       }
       printf("Resultant Matrix (A x B) : \n");
        for (int i = 1; i <= m; i++)
       {
          for (int j = 1; j <= q; j++)
          {
                 printf("%d ", arr3[i][j]);
             }
          printf("\n");
       }

      }
 return 0;
}
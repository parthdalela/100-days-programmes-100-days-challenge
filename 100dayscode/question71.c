#include<stdio.h>
int main()
{
    int m,n;
    printf("enter number of rows = ");
    scanf("%d",&m);
    printf("enter number of columns = ");
    scanf("%d",&n);
    int arr[m][n];
    printf("enter elements of matrix = ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matrix is = \n");
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
          printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;    
}
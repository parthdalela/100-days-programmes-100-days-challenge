/*Perform diagonal traversal of a matrix.*/
#include<stdio.h>
int main()
{
    int m,n;
    printf("enter rows of matrix =");
    scanf("%d",&m);
    printf("enter columns of matrix =");
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
    printf("Diagonal Traversal of the matrix is:\n");
    for(int d=0; d<m+n-1; d++)
    {
        if(d%2==0)
        {
            for(int i=d< n-1 ? 0 : d - (n - 1); i<=d && i<m; i++)
            {
                int j=d - i;
                if(j>=0 && j<n)
                    printf("%d ", arr[i][j]);
            }
        }
        else
        {
            for(int i=d< m-1 ? d : m - 1; i>=0; i--)
            {
                int j=d - i;
                if(j>=0 && j<n)
                    printf("%d ", arr[i][j]);
            }
        }
    }
    return 0;
}
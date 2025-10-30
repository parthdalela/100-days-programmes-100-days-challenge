#include<stdio.h>
int main()
{
    int p,q,m,n;
    printf("enter number of rows of matrix one  = ");
    scanf("%d",&p);
    printf("enter number of columns of matrix one = ");
    scanf("%d",&q);
    printf("enter elements of the matrix = \n");
    int arr1[p][q];
    for(int i=1;i<=p;i++)
    {
        for(int j=1;j<=q;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("first matrix is this :\n");
    for(int i=1;i<=p;i++)
    {
        for(int j=1;j<=q;j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    int arr2[m][n];
     printf("enter number of rows of matrix two  = ");
    scanf("%d",&m);
    printf("enter number of columns of matrix two = ");
    scanf("%d",&n);
     int arr3[p][q];
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Second matrix is this :\n");
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    for(int i=1;i<=p;i++)
    {
        for(int j=1;j<=q;j++)
        {
                if(p==q && m==n)
             {
                    arr3[p][q]=arr1[p][q]+arr2[p][q];
             }
        }
    }
    printf("Resultant matrix is this :\n");
    for(int i=1;i<=p;i++)
    {
        for(int j=1;j<=q;j++)
        {
            printf("%d",arr3[i][j]);
        }
    }
}
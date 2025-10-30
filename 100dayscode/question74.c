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
    printf("before transposing : \n");
    for(int i=1;i<=p;i++)
    {
        for(int j=1;j<=q;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    int arrtranspose[q][p];
    for(int i=1;i<=p;i++)
    {
        for(int j=1;j<=q;j++)
        {
            arrtranspose[q][p]=arr[p][q];
        }
    }
    printf("after transposing : \n");
    for(int i=1;i<=q;i++)
    {
        for(int j=1;j<=p;j++)
        {
            printf("%d\t",arrtranspose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
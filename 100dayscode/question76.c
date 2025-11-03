/*Check if a matrix is symmetric.*/
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
    int arrtranspose[q][p]; 
    for(int i=1;i<=p;i++)
    {
        for(int j=1;j<=q;j++)
        {
            arrtranspose[j][i]=arr[i][j];
        }
    }

    for(int i=1;i<=q;i++)
    {
        for(int j=1;j<=p;j++)
        {
            if(arr[i][j]==arrtranspose[i][j])
            {
                printf("matrix is symmetric \n");
                break;
            }
            else
            {
                printf("matrix is not symmetric \n");
                break;
            }
        }
    }
    return 0;
}
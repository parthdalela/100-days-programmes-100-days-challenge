#include<stdio.h>
int main()
{ 
    int p,q;
    printf("enter number of rows of matrix = ");
    scanf("%d",&p);
    printf("%d",&q);
    scanf("%d",&q);
    printf("enter the elements of matrix : \n");
    int arr[p][q];
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
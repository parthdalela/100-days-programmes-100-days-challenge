#include<stdio.h>
int main()
{
     int n,k;
    printf("enter the size of array =");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array =");
    for ( int i = 0; i <n; i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("enter the value of k to rotate an array k times = ");
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
    for(int j=n-1;j>0;j--)
    {
        int t=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=t;
    }
    }
    for(int k=0;k<n;k++)
        {
            printf("%d\t",arr[k]);
        }
    return 0;
}
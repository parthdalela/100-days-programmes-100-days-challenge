#include<stdio.h>
int main()
{
    int n,element;
    printf("enter the size of array = ");
    scanf("%d",&n);
    printf("enter the elements of array = ");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to get deleted = ");
    scanf("%d",&element);
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==element)
    {
        for(int j=i;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
    }
    }
    for(int i=0;i<n-1;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
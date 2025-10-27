/*Insert an element in a sorted array at the appropriate position.*/
#include<stdio.h>
int main()
{
     int n,element;
    printf("enter the size of array =");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array =");
    for ( int i = 0; i <n; i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("enter the element to insert = ");
    scanf("%d",&element);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
        int t=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=t;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>element)
        {
            for(int j=n;j>=i;j--)
            {
                arr[j]=arr[j-1];
            }
            arr[i]=element;
            break;
        }
    }
        for(int k=0;k<n+1;k++)
        {
            printf("%d \n",arr[k]);
        }
    return 0;
}
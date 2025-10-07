#include<stdio.h>
int main()
{
    int n,negative=0,positive=0,zero = 0;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
           positive++;
        }
        else if(arr[i]<0)
        {
            negative++;
        }
        else{
            zero++;
        }
    }
    printf("positive numbers are = %d\n",positive);
    printf("negative numbers are = %d",negative);
    printf("zeroes are = %d",zero);
    return 0;
}
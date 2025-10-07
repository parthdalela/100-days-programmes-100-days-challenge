#include<stdio.h>
int main()
{
    int n,even=0,odd=0;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
           even++;
        }
        else{
            odd++;
        }
    }
    printf("even numbers are = %d\n",even);
    printf("odd numbers are = %d",odd);
    return 0;
}
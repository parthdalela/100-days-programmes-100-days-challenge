//Insert an element in an array at a given position.
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
    int position;
    printf("enter the position to insert the element = ");  
    scanf("%d",&position);
    for(int j=n;j>position;j++)
    {
        arr[j]=arr[j-1];
    }
    arr[position]=element;
    for(int i=0;i<=n;i++)
    {
        printf("%d",&arr[i]);
    }
    return 0;
}
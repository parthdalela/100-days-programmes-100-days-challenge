#include<stdio.h>
int main()
{
    int n,search;
    printf("enter the size of array =");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array =");
    for ( int i = 0; i <n; i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("enter the number to search =  ");
    scanf("%d",&search);
    for ( int i = 0; i <n; i++)
    {
      if(arr[i]==search)
     {
        printf("the element %d is at index %d",search,i);  
        break;
     }
    }
    return 0;
}
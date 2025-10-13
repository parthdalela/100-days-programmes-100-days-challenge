#include<stdio.h>
int main()
{
    int num;
    printf("enter a number = ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
      if(num%i==0)
      {
        printf("%d\t",i);
      }
    }
    return 0;
}
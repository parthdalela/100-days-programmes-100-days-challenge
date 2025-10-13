#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter first number = ");
    scanf("%d",&num1);
    printf("enter second number = ");
    scanf("%d",&num2);
    if(num2>num1)
    {
      for(int i=num2;i>=1;i--)
      {
        if(num2%i==0&&num1%i==0)
        {
            printf("HCF = %d",i);
            break;
        }
      }
    }
    else
    {
        for(int j=num1;j>=1;j--)
    {
        if(num2%j==0&&num1%j==0)
        {
            printf("HCF = %d",j);
            break;
        }
    } 
    }
}
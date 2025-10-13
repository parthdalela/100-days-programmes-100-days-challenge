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
    for(int i=1;i<=num2;i++)
    {
        for(int j=1;j<=i+1;j++)
        {
            if(num1*j==num2*i)
            {
                printf("LCM = %d",num1*j);
                break;
            }
        }
    }
  }
    else{
          for(int i=1;i<=num1;i++)
    {
        for(int j=1;j<=i+1;j++)
        {
            if(num2*j==num1*i)
            {
                printf("LCM = %d",num2*j);
                break;
            }
        }
    }
    }
return 0;
}
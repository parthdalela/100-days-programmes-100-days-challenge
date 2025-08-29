#include<stdio.h>
int main()
{
    int num1,num2; // t is the third variable used to swap numbers
    printf("enter first number = ");
    scanf("%d",&num1);
    printf("enter second number = ");
    scanf("%d",&num2);
    if(num1>num2)
     {
     num2=num1+num2;
     num1=num1-num2;
     num2=num1-num2;
     }
     else
     {
     num2=num1+num2;
     num1=num2-num1;
     num2=num2-num1;
     }
     printf("values after wapping are  num 1 = %d \n num2 = %d",num1,num2);
     return 0;
}
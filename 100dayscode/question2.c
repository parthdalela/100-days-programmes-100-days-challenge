#include<stdio.h>
int sum(int a,int b);
int diff(int a,int b);
int prod(int a,int b);
float div(float a,float b);
int main()
{
int num1,num2;   // declaring all 2 numbers
printf("Enter first number = "); 
scanf("%d",&num1);
printf("Enter second number = ");
scanf("%d",&num2);
printf("sum of numbers is = %d\n",sum(num1,num2));
printf("diffrence of numbers is = %d\n",diff(num1,num2));
printf("product of numbers is = %d\n",prod(num1,num2));
printf("division of numbers is =%f",div(num1,num2));
return 0;
} 
// function to add numbers
int sum(int a,int b)
{
    return a+b;
}
// function to subtract numbers
int diff(int a,int b)
{
    if(a>b)
    {
        return a-b;
    }
    else
    {
        return b-a;
    }
}
// function to multiply numbers
int prod(int a,int b)
{
    return a*b;
}
// function to divide numbers
float div(float a,float b)
{
    if(b==0)
    {
        printf("division by zero is undefined");
    }
    else
    {
        return a/b;
    }
}
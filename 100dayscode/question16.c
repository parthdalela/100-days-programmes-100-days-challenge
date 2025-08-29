#include<stdio.h>
int main()
{
    int num,digit1,digit2,digit3; // num variable for input and digit to extract the largest digit.
    printf("enter a 3 digit number = ");
    scanf("%d",&num);
    digit1=num%10;
    digit2=(num%100-digit1)/10;
    digit3=num/100;
    if(digit1>digit2 && digit1>digit3)
    {
        printf("largest is %d",digit1);
    }
    if(digit2>digit1 && digit2>digit3)
    {
        printf("largest is %d",digit2);
    }
   else 
   {
        printf("largest is %d",digit3);
    }
    return 0;
}
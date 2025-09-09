#include<stdio.h>
int main()
{
    int num,digit,prod=1;
    printf("enter a number = ");
    scanf("%d",&num);
    while(num!=0)
    {
        digit=num%10;
        if(digit%2!=0)
        {
            prod=prod+digit;
        }
        num/=10;
    }
    printf("%d",prod);
    return 0;
}
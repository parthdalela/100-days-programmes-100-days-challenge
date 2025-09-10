#include<stdio.h>
void main()
{
    int num,sum=0;
    printf("enter a number = ");
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    if(sum==num)
    {
        printf("perfect number");
    }
    else{
        printf("not a perfect number");
    }
}
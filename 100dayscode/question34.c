#include<stdio.h>
int main()
{
    int num,count=0;
    printf("enter a number = ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
        count++;
        }
        else{
            continue;
        }
    }
    if(count>2)
    {
        printf("not prime");
    }
    else{
        printf("prime");
    }
}
#include<stdio.h>
int main()
{
    int num,rem;
    printf("enter a number =");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%2;
        printf("%d",rem);
        num/=2;
        continue;
    }
    return 0;
}
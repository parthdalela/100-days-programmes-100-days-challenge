#include<stdio.h>
int main()
{
    int n,e=3;float sum=0.0;
    printf("enter the limit = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum = sum + (float)(2*i)/e;
        e+=4;
    }
    printf("%f",sum);
    return 0;
}
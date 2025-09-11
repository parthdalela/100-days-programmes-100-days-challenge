#include<stdio.h>
int main()
{
    int n;float sum=0.0;int e=3;
    printf("enter n = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        float term = (float)e/(e+1);
        sum = sum + term ;
        e+=2;
    }
    printf("%0.2f",sum+1);
    return 0;
}
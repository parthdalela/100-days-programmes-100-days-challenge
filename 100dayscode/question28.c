#include<stdio.h>
int main()
{
    int prod=1;int n;
    printf("enter the value of n = ");
    scanf("%d",&n);
    for(int i=2;i<=n;i=i+2)
    {
        prod=prod*i;
    }
    printf("%d",prod);
    return 0;
}
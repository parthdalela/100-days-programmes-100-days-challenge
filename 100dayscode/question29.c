#include<stdio.h>
int main()
{
    int n;int prod=1;
    printf("enter a number = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        prod=prod*i;
    }
    printf("%d",prod);
}
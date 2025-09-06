#include<stdio.h>
#include<math.h>
int main()
{
    int num,count=0,rem;float sum=0;
    printf("enter a number = ");
    scanf("%d",&num);
    int cpy=num;
    while(cpy!=0)
    {
        cpy/=10;
        count++;
    }
    cpy=num;
    while(cpy!=0)
    {
        rem=cpy%10;
        sum+=pow(rem,count);
        cpy/=10;
    }
    if((int)sum==num)
    {
        printf("armstrong");
    }
    else{
        printf("not armstrong");
    }
    return 0;
}

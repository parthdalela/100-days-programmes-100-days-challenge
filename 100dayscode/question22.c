#include<stdio.h>
int main()
{
    float cp,sp,profit,loss;
    printf("enter cost price = ");
    scanf("%f",&cp);
    printf("enter sell price = ");
    scanf("%f",&sp);
    if(sp>cp)
    {
        profit=((sp-cp)/cp)*100;
        printf("profit %f",profit);
    } 
    else{
        loss=((cp-sp)/cp)*100;
        printf("loss %f",loss);
    }
    return 0;
}
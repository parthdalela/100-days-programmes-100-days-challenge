#include<stdio.h>
#include<math.h>
int main()
{   float principle,rate,Rate;int time;
    printf("enter principle amount = ");
    scanf("%f",&principle);
    printf("enter rate = ");
    scanf("%f",&rate);
    printf("enter time period = ");
    scanf("%d",&time);
    Rate=rate/100;
    float simpleinterest=(principle*rate*time)/100;
    float compoundinterest=principle*pow((1+Rate),time);
    printf("the simple interest is = %f \n",simpleinterest);
    printf("the compound interest is = %f\n",compoundinterest);
    return 0;
}
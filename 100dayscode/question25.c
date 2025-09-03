#include<stdio.h>
int main()
{
    int n1,n2,sum,diff,prod,option;float div,mod; 
    printf("enter first number = ");
    scanf("%d",&n1);
    printf("enter second number = ");
    scanf("%d",&n2);
    printf("menu:\n1:addtion\n2:subtraction\n3:multiplication\n4:division\n5:remainder");
    scanf("%d",&option);
    switch(option)
    {
        case 1: sum=n1+n2;
        printf("%d",sum);
        break;
        case 2: diff=n1-n2;
        printf("%d",diff);
        break;
        case 3: prod=n1*n2;
        printf("%d",prod);
        break;
        case 4: if(n2==0)
        {
            printf("undefined");
        }
        else
        {
            div=n1/n2;
            printf("%f",div);
        }
        break;
        case 5: mod =n1%n2;
        printf("%f",mod);
        break;
        default: printf("invalid choice");
    }
    return 0;
}
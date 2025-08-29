#include<stdio.h>
int main()
{
    int num;
    printf("enter an integer = ");
    scanf("%d", &num);
    if (num != 0)
    {
        if (num>0)
        {
            printf("entered number is positive");
        }
        else
        {
            printf("entered number is negative");
        }
    }
    else
    {
        printf("entered number is zero");
    }
    return 0;
}
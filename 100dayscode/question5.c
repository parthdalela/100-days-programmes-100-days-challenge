#include<stdio.h>
int main()
{
    float celsius,fahrenhite;
    printf("enter temperature in celsius = ");
    scanf("%f",&celsius);
    fahrenhite = (celsius* 1.4)+32;
    printf("temperature in fahrenhite is = %f",fahrenhite);
    return 0;
}
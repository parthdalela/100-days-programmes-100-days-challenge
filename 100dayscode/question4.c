#include<stdio.h>
#include<math.h>
int main()
{
    int radius;float area,circumference;
    printf("enter radius of circle = ");
    scanf("%d",&radius);
    area =3.14*radius*radius;
    circumference=2*3.14*radius;
    printf("area of circle is = %f\n",area);
    printf("circumference of circle is = %f",circumference);
    return 0;
}
#include<stdio.h>
int main()
{
    int side1,side2,side3;
    printf("enter 3 sides of a triangle = \n");
    scanf("%d %d %d",&side1,&side2,&side3);
    if(side1==side2 && side2==side3)
    {
        printf("Equilateral triangle");
    }
    if(side1!=side2 && side2!=side3)
    {
        printf("Scalene triangle");
    }
    if(side1==side2 || side2==side3)
    {
        printf("Isoceles");
    }
      return 0;
}
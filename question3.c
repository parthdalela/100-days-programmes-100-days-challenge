#include<stdio.h>
#include<math.h>
int main()
{
    int length,breadth,area;
    printf("enter length of rectangle = ");
    scanf("%d",&length);
     printf("enter breadth of rectangle = ");
    scanf("%d",&breadth);
    area =length*breadth;
    printf("area of rectangle is = %d\n",area);
    return 0;
}
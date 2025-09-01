#include<stdio.h>
int main()
{
  int units;
  printf("enter the number of units consumed = ");
  scanf("%d",&units);
  if(units<=100)
  {
    printf("Bill = %d",3*units);
  }
  else if(units>100 && units<=200)
{
    printf("Bill is = %d",5*units);
}
else
{
    printf("Bill is = %d",7*units);
}
return 0;
}
#include<stdio.h>
int main()
{
  float percent;
  printf("enter your percentage = ");
  scanf("%f",&percent);
  if(percent>=90 && percent<=100)
  {
    printf("Grade A");
  }
  else if(percent<90 && percent>=80)
  {
    printf("Grade B");
  }
  else if(percent<80 && percent>=70)
  {
    printf(" Grade C");
  }
  else if(percent<70 && percent>=60)
  {
    printf(" Grade D");
  }
  else if(percent<60 && percent>50)
  {
    printf("Grade E");
  }
  else
  {
    printf("Grade F");
  }
  return 0;
}
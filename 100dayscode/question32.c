#include<stdio.h>
int main()
{
   int num,num2,copy;;int reverse=0;
   printf("enter a number =");
   scanf("%d",&num);
   copy =num;
   while(num!=0)
   {
      num2=num%10;
      reverse=reverse*10 + num2;
      num/=10;
   }
   if(copy==reverse)
   {
    printf("palindrome");
   }
   else{
    printf("not palindrome");
   }
}

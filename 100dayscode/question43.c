#include<stdio.h>
int factorial(int n);
int main()
{
   int num,digit,sum=0;
   printf("enter a number = ");
   scanf("%d",&num);
   int cpy=num;
   while(num!=0)
   {
      digit=num%10;
      sum=sum+factorial(digit);
      num/=10;
   }
   if(cpy==sum)
   {
      printf("strong number");
   }
   else{
      printf("not a strong number");
   }
   return 0;
}

int factorial(int n)
{ 
   int prod=1;
   for(int i=1;i<=n;i++)
   {
     prod=prod*i;
   }
   return prod;
}
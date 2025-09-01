#include<stdio.h>
#include<math.h>
int main()
{
   int days;
   printf("enter number of delayed days = ");
   scanf("%d",&days);
   if(days==31)
   {
      printf("Membership Cancelled");
   }
   else
   {
      int fine = days *(int)(days/2);
      printf("%d",fine);
   }
   return 0;
}
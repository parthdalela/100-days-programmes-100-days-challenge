#include<stdio.h>
int main()
{  int e=0;
   for(int i=1;i<=3;i++)
   {
     for(int j=1;j<=i+e;j++)
     {
        printf("*\n");
     }
     printf("\n");
     e++;
   }
   for(int i=1;i<=2;i++)
   {
     for(int j=3;j>=i;j--)
     {
        printf("*\n");
     }
     printf("\n");
   }
   return 0;
}

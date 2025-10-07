//Write a program to print all the prime numbers from 1 to n.
#include<stdio.h>
int prime(int);
void main()
{
    int n; int i;
    printf("enter a number to get all the prime numbers till there = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      printf("%d\t",prime(i));
    }
}
int prime(int a)
{ int count;
    for(int j=1;j<=a/2;j++)
    {
      if(a%j==0)
      {
        count++;
      }
      else{
        continue;
      }
    }
    if(count<=2)
    {
      return a;
    }
}
#include<stdio.h>
int main()
{ int stars;
    for(int i=1;i<=3;i++)
    { stars=2*i-1;
      for(int space=(3-i);space>=1;space--)
      {
        printf(" ");
      }
      for(int j=1;j<=stars;j++)
      {
        printf("*");
      }
      printf("\n");
    }
      for(int i=3;i>=1;i--)
    {
        for(int space=1;space<=3-i;space++)
      {
        printf(" ");
      }
      for(int j=2*i-1;j>=1;j--)
      {
        printf("*");
      }
     printf("\n");
    }
    return 0;
}/*
int add(int,int);
int difference(int,int);
int product(int,int);
int division(int,int);
int main(){
  int a,b,c,d;
  int (*fp)(int,int);
  fp=&add;
  a=fp(10,30);
  printf("sum=%d\n",a);
  fp=&difference;
  b=fp(10,30);
  printf("difference = %d\n",b);
  fp=&product;
  c=fp(10,30);
  printf("product = %d\n",c);
  fp=&division;
  d=fp(10,30);
  printf("division=%d",d);
  return 0;
}
int add(int a,int b)
{
  return a+b;
}
int product(int a,int b)
{
  return a*b;
}
int division(int a,int b)
{
  if(a>b)
  {
    return a/b;
  }
  else{
    return b/a;
  }
}
int difference(int a,int b)
{
  return a-b;
}*/
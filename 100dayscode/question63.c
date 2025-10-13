#include<stdio.h>
int main()
{
    int n,m;
printf("enter the size of first array = ");
scanf("%d",&n);
int arr[n];
printf("enter the size of second array = ");
scanf("%d",&m);
int arr1[m];
for(int i=0;i<n;i++)
{
    printf("enter the %d element of first array ",i);
   scanf("%d",&arr[i]);
}
for(int i=0;i<m;i++)
{
    printf("enter the %d element of second array ",i);
    scanf("%d",&arr1[i]);
}
int arr2[m+n];
for(int i=0;i<n;i++)
{
   arr2[i]=arr[i];
}
int e=0;
for(int i=n;i<m+n;i++)
{
    arr2[i]=arr1[e];
    e++;
}

for(int i=0;i<m+n;i++)
{
    printf("%d\t",arr2[i]);
}
return 0;
}
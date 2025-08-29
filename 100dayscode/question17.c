#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,p,q;double discriminant; // where p and q are roots of equation
    printf("enter coefficient of xsquare = ");
    scanf("%d",&a);
    printf("enter coefficient of x = ");
    scanf("%d",&b);
    printf("enter constant term = ");
    scanf("%d",&c);
    discriminant = sqrt((b*b)-(4*a*c));
     p = (sqrt(discriminant) - b)/(2*a);
     q = -(sqrt(discriminant) + b)/(2*a);
     if(a>0 && discriminant>0)
    {
        printf("real and distinct roots = %d \t %d",p,q);
    }
    else if(a<0 && discriminant>0)
    {
        int t=q;
        q=p;
        p=t;
        printf("real and distinct roots = %d \t %d",p,q);
    }
    else if(p==q && discriminant==0)
    {
        printf("roots are real and equal = %d ",p);
    }
    else
    {
        printf("complex roots");
    }
    return 0;
}
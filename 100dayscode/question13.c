#include <stdio.h>
int main()
{
    int year;
    printf("enter a year = ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if(year%100!=0)
        {
            printf("year entered is a leap year");
        }
    }
    else if(year%400==0)
    {
        printf("entered year is a leap year");
    }
    else{
          printf("year entered is not a leap year");
    }
    return 0;

}

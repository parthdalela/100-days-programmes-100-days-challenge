/*#include <stdio.h>

int main() {
    int i, j;
    int rows = 7;
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = rows - 1; i >= 1; i--) {
        for (j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}*/
#include<stdio.h>
int main()
{
 for(int i=1;i<=4;i++)
 {
    for(int j=1;j<=2*i-1;j++)
    {
     printf("*");
    }
    printf("\n");
}
    for(int i=3;i>=1;i--)
    {
        for(int j=2*i-1;j>=1;j--)
        {
            printf("*");
        }
    printf("\n");
    }
    return 0;
 }   
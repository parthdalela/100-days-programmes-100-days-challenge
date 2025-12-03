//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2
*/
#include <stdio.h>
#include<string.h>
enum trafficlight {RED, YELLOW, GREEN};
int main()
{
    enum trafficlight t;
    for(t=RED; t<=GREEN; t++)
    {
        switch(t)
        {
            case RED:
                printf("RED=%d\n",t);
                break;
            case YELLOW:
                printf("YELLOW=%d\n",t);
                break;
            case GREEN:
                printf("GREEN=%d\n",t);
                break;
        }
    }
    return 0;
}
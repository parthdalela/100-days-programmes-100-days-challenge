//Q135: Assign explicit values starting from 10 and print them.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/
#include<stdio.h>
enum letters {A=10,B,C,};
int main()
{
    enum letters l;
    for(l=A;l<=C;l++)
    {
        switch(l)
        {
            case A:
                printf("A=%d\n",l);
                break;
            case B:
                printf("B=%d\n",l);
                break;
            case C:
                printf("C=%d\n",l);
                break;
        }
    }
    return 0;
}
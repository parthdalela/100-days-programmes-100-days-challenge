/*Reverse a string*/
#include<stdio.h>
int main()
{
    char str[100];
    printf("enter a string\t");
    fgets(str,sizeof(str),stdin);
    int i;
    for(i=0;str[i]!=0;i++);
    {
        char ch=str[0];
        str[0]=str[i-1];
        str[i-1]=ch;
    }
    printf("Reversed string is: %s",str);
    return 0;
}
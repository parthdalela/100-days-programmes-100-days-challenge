/*Count spaces, digits, and special characters in a string.*/
#include<stdio.h>
#include<string.h>
int main()
{
    int spaces=0,digits=0,special=0;
    char str[100];
    printf("enter a string\n");
    fgets(str,50,stdin);
    for(int i=0;str[i]!=0;i++)
    {
        char ch=str[i];
        if(ch>=48 && ch<=57)
        {
           digits++;
        }
        if(ch==32)
        {
            spaces++;
        }
        if(ch>=33&&ch<=47)
        {
            special++;
        }
    }
    printf("spaces: %d \n digits: %d \n special: %d \n",spaces,digits,special);
    return 0;
}
/*Convert a lowercase string to uppercase without using built-in functions.*/
#include<stdio.h>
int main()
{
    char str[100];
    printf("enter a string\t");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!=0;i++)
    {
        char ch=str[i];
        if(ch>='A' && ch<='Z')
        {
            ch=ch+32;
            printf("%c",ch);
        }
        else
        {
            printf("%c",ch);
        }
    }
 return 0;
}
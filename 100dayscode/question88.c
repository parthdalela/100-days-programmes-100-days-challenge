/*Replace spaces with hyphens in a string.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter a string = ");
    fgets(str,50,stdin);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==32)
        {
            str[i]='-';
        }
        else
        {
            continue;
        }
    }
   /* for(int i=0;i<strlen(str);i++)
    {
        printf("%c",str[i]);
    }*/
    printf("new string: %s", str);
    return 0;
}
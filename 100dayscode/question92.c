#include<stdio.h>
#include<string.h>
int main()
{
     char str[100];
    printf("enter a string\t");
    fgets(str,50,stdin);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            if(str[i]==str[i+1])
            {
                printf("%c",str[i]);
                break;
            }
        }
    }
    return 0;
}
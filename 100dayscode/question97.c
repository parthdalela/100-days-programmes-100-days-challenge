#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter a string\t");
    fgets(str,50,stdin);
    if(str[0]>='a'&&str[0]<='z')
    {
        str[0]=str[0]-32;
        printf("%c.",str[0]);
    }
    else
    {
    printf("%c.",str[0]);
    }
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==32)
        {
        if(str[i+1]>='a'&&str[i+1]<='z')
        {  
              str[i+1]=str[i+1]-32;
              printf("%c.",str[i+1]);
        }
        else{
            printf("%c.",str[i+1]);
        }
        }
        else{
            continue;
        }
    }
    return 0;
}
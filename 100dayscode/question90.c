#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter a string\t");
    fgets(str,50,stdin);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        else{
            str[i]=str[i]-32;
        }
    }
    printf("%s",str);
    return 0;
}
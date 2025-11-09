#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str2[100];
    printf("enter a string\t");
    fgets(str,50,stdin);
    strcpy(str,str2);
    for(int i=0;i<strlen(str);i++)
    {
    char c=str[strlen(str)-1];
    str[strlen(str)-1]=str[i];
    str[i]=c;
    }
    if(strcmp(str,str2)==0)
    {
        printf("Anagrams");
    }
    else
    {
        printf("not anagrams");
    }
    return 0;
}
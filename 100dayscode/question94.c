/*Find the longest word in a sentence.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter a string\t");
    fgets(str,50,stdin);
    for(int i=0;i<strlen(str);i++)
    {
        int count=0;
        if(str[i]==32)
        {
            str[i]='\0';
            for(int j=str[i];str[i]!='\0';j++)
            {
               count++; 
            }
          
        }
    }
    
    return 0;
}
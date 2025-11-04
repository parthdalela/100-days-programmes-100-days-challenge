/*check if a string is a palindrome.*/
#include<stdio.h>
#include<string.h>  
int main()
{
    char str[100];
    int flag=1;
    printf("enter a string\t");
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    for(int i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-i-2]) // len-i-2 to ignore the newline character
        {
            flag=0;
            break;
        }
    }
    if(flag)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
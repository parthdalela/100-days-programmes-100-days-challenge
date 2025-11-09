/*Count frequency of a given character in a string.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char c;int count=0;
    printf("enter a string\t");
    char str[100];
    fgets(str,50,stdin);
    printf("enter a character to know its frequency\t");
    scanf("%c",&c);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==c)
        {
            count++;
        }
        else{
            continue;
        }
    }
    printf("the frequency of the charcter is = %d",count);
    return 0;
}
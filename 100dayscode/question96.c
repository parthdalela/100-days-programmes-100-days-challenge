/*Reverse each word in a sentence without changing the word order.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    printf("enter a string\t");
    fgets(str,100,stdin);
    int start=0;
    for(int i=0; ;i++)
    {
        if(str[i]==' '||str[i]=='\0')
        {
            int end=i-1;
            while(start<end)
            {
                char temp=str[start];
                str[start]=str[end];
                str[end]=temp;
                start++;
                end--;
            }
            start=i+1;
        }
        if(str[i]=='\0') break;
    }
    printf("reversed words are %s\n",str);
    return 0;
}
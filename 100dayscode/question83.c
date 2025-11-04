/*Count vowels and consonants in a string.*/
#include<stdio.h>
int main()
{
    char str[100];
    int vowels=0,consonants=0;
    printf("enter a string = ");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!=0;i++)
    {
        char ch=str[i];
        if(ch>='A'&&ch<='Z')
        {
            ch=ch+32;
        }
        if(ch=='a' || ch=='e' || ch=='i'|| ch=='o' || ch=='u')
        {
            vowels++;
        }
        else{
            consonants++;
        }
    }
    printf("vowels = %d\n",vowels);
    printf("consonants = %d",consonants);
    return 0;
}
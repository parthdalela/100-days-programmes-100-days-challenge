#include<stdio.h>
int main()
{
    char ch ; int ascii;
    printf("enter any character = ");
    scanf("%c",&ch);
    ascii=ch;
    if(ascii>=65&&ascii<=90)
    {
        printf("%c \t uppercase alphabet",ch);
    }
    if(ascii>=97&&ascii<=122)
    {
        printf("%c \t lowercase alphabet",ch); 
    }
    if(ascii>=33&&ascii<=47)
    {
         printf("%c \t special character",ch);
    }
    if(ascii>=48&&ascii<=57)
    {
         printf("%c \t digit",ch);
    }
    return 0;
}
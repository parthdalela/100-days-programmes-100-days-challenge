/*Check if one string is a rotation of another.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str0[100],str1[100],str2[100];
    printf("enter a string\t");
    scanf("%s",str0);
    printf("enter a string\t");
    scanf("%s",str1);
    if(strlen(str0)==strlen(str1))
    {
        printf("no rotation");
    }
    else{
    strcpy(str2,str0);
    strcat(str2,str0);
    if(strstr(str2,str1)!=NULL)
    {
        printf("rotation");
    }
    else{
        printf("no rotation");
    }
    return 0;
}
}
/*Count characters in a string without using built-in length functions.*/
#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char str[100];
    printf("enter a string = ");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    printf("Length of the string is: %d\n",count-1); // Subtracting 1 to exclude the newline character
    return 0;
}
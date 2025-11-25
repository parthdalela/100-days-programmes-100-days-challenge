//Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

/*
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23
*/
#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("info.txt","r");
    if(ptr==NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    char line[100];
    while(fgets(line, sizeof(line), ptr) != NULL)
    {
        printf("%s", line);
    }
    fclose(ptr);
    return 0;
}
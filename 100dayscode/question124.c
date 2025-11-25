//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt
*/
#include <stdio.h>
int main()
{
    char sourceFile[100], destFile[100];
    FILE *source, *dest;
    char ch;
    printf("Enter source file name: ");
    scanf("%s", sourceFile);
    printf("Enter destination file name: ");
    scanf("%s", destFile);
    source = fopen(sourceFile, "r");
    if (source == NULL)
    {
        printf("Error opening source file!\n");
        return 1;
    }
    dest = fopen(destFile, "w");
    if (dest == NULL)
    {
        printf("Error opening destination file!\n");
        fclose(source);
        return 1;
    }
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, dest);
    }
    fclose(source);
    fclose(dest);
    printf("File copied successfully to %s\n", destFile);
    return 0;
}
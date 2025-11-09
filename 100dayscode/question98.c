/*Print initials of a name with the surname displayed in full.*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter full name: ");
    gets(name);
    int len = strlen(name);
    int i = 0;
    while (i < len) {
        while (name[i] == ' ') i++;
        int start = i;
        while (i < len && name[i] != ' ') i++;
        if (i < len) {
            printf("%c. ", name[start]);
        }
         else
         {
            printf("%s", &name[start]);
        }
    }
    return 0;
}
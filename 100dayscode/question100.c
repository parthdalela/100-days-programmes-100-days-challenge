/*Print all sub-strings of a string.*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abc";
    int len = strlen(str);

    printf("All substrings of \"%s\":\n", str);

    for (int i = 0; i < len; i++) {
        for (int j = 1; j <= len - i; j++) {
            char sub[j + 1];
            strncpy(sub, str + i, j);
            sub[j] = '\0';
            printf("%s\n", sub);
        }
    }

    return 0;
}
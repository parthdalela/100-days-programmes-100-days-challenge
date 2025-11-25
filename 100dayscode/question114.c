//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>
int lengthOfLongestSubstring(char* s) {
    int maxLength = 0;
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        int seen[256] = {0}; 
        int currentLength = 0;
        for (int j = i; j < n; j++) {
            if (seen[(unsigned char)s[j]] == 1) {
                break; 
            }
            seen[(unsigned char)s[j]] = 1;
            currentLength++;
        }
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }
    return maxLength;
}
int main() {
    char s[1001];
    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    int result = lengthOfLongestSubstring(s);
    printf("%d\n", result);
    return 0;
}
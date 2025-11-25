//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool areAnagrams(char* s, char* t) {
    int countS[26] = {0};
    int countT[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        countS[s[i] - 'a']++;
    }
    for (int i = 0; t[i] != '\0'; i++) {
        countT[t[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (countS[i] != countT[i]) {
            return false;
        }
    }
    return true;
}
int main() {
    char s[1001], t[1001];
    printf("Enter the first string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    printf("Enter the second string: ");
    fgets(t, sizeof(t), stdin);
    t[strcspn(t, "\n")] = '\0';
    if (areAnagrams(s, t)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }
    return 0;
}
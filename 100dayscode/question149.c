//Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
int main()
{
    struct Student *s1;
    s1 = (struct Student*)malloc(sizeof(struct Student));
    if(s1 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter name, roll number and marks of the student:\n");
    scanf("%s %d %d", s1->name, &s1->roll, &s1->marks);
    printf("Name: %s | Roll: %d | Marks: %d\n", s1->name, s1->roll, s1->marks);
    free(s1);
    return 0;
}
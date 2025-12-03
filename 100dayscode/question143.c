//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
int main() {
    struct Student students[5];
    int n, i, topperIndex = 0;
    float highestMarks = -1.0;
    printf("Enter number of students (max 5): ");
    scanf("%d", &n);
    if (n > 5) n = 5; 
    for (i = 0; i < n; i++) {
        printf("Enter name, roll number and marks of student %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].roll_no, &students[i].marks);
        if (students[i].marks > highestMarks) {
            highestMarks = students[i].marks;
            topperIndex = i;
        }
    }
    printf("Topper: %s (Marks: %.2f)\n", students[topperIndex].name, students[topperIndex].marks);
    return 0;
}
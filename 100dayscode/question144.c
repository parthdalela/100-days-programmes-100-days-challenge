//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.2f\n", s.name, s.roll_no, s.marks);
}
int main() {
    struct Student student;
    printf("Enter name, roll number and marks of the student: ");
    scanf("%s %d %f", student.name, &student.roll_no, &student.marks);
    printStudent(student);
    return 0;
}
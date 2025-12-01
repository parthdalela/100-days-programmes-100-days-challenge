/*Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include<stdlib.h>
#include<stdio.h>
struct Student{
    char name[20];
    int rollno;
    float marks;
};
int main()
{
    struct Student s1;
    struct Student *ptr=&s1;
    ptr=(struct Student*)malloc(sizeof(s1));
    if(ptr==NULL){
        printf("Memory not allocated\n");
        return 1;
    }
    printf("Enter name, roll number and marks of the student:\n");  
    scanf("%s %d %f",ptr->name,&ptr->rollno,&ptr->marks);
    printf("Name: %s | Roll: %d | Marks: %.2f\n",ptr->name,ptr->rollno,ptr->marks);
    free(ptr);
}
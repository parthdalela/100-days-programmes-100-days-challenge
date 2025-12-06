//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
#include <stdlib.h>
typedef struct employee {
    char name[30];
    int id;
    float salary;
} emp;
int main() {
    emp e1;
    FILE *fptr;

    // Opening file in binary write mode
    fptr = fopen("employee.dat", "wb");
    if (fptr == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter employee name, id and salary:\n");
    scanf("%s %d %f", e1.name, &e1.id, &e1.salary);

    // Write employee data to file
    fwrite(&e1, sizeof(emp), 1, fptr);
    fclose(fptr);

    // Opening file in binary read mode
    fptr = fopen("employee.dat", "rb");
    if (fptr == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read employee data from file
    emp e2;
    fread(&e2, sizeof(emp), 1, fptr);
    fclose(fptr);

    // Display employee data read from file
    printf("Employee Data Read from File:\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n", e2.name, e2.id, e2.salary);

    return 0;
}
//Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

//N.B:
//- Print the output for each element in a comma separated fashion.
//- Do not use Stack, use brute force approach (nested loop) to solve.

/*
Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
3, 4, 4, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
8, -1, 1, 3, -1

Input 3:
arr = [1, 2, 3, 5]
Output 3:
2, 3, 5, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, -1, -1, -1

*/
#include <stdio.h>
void nextGreaterElements(int* arr, int arrSize, int* result) {
    for (int i = 0; i < arrSize; i++) {
        result[i] = -1; 
        for (int j = i + 1; j < arrSize; j++) {
            if (arr[j] > arr[i]) {
                result[i] = arr[j];
                break; 
            }
        }
    }
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result[n];
    nextGreaterElements(arr, n, result);
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf(", ");
        }
        printf("%d", result[i]);
    }
    printf("\n");
    return 0;
}
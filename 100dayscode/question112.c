//Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/
#include <stdio.h>
int maxSubArray(int* arr, int arrSize) {            
    int maxSoFar = arr[0];
    int maxEndingHere = arr[0];
    for (int i = 1; i < arrSize; i++) {
        if (maxEndingHere + arr[i] > arr[i]) {
            maxEndingHere += arr[i];
        } else {
            maxEndingHere = arr[i];
        }
        if (maxEndingHere > maxSoFar) {
            maxSoFar = maxEndingHere;
        }
    }
    return maxSoFar;
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
    int result = maxSubArray(arr, n);
    printf("%d\n", result);
    return 0;
}
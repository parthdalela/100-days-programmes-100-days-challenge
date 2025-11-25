//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/
#include <stdio.h>
void firstNegativeInSubarrays(int* arr, int arrSize, int k, int* result) {
    for (int i = 0; i <= arrSize - k; i++) {
        result[i] = 0; 
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                result[i] = arr[i + j];
                break; 
            }
        }
    }
}
int main() {
    int n, k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the subarray size k: ");
    scanf("%d", &k);
    int result[n - k + 1];
    int resultSize = n - k + 1;
    firstNegativeInSubarrays(arr, n, k, result);
    for (int i = 0; i < resultSize; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", result[i]);
    }
    printf("\n");
    return 0;
}
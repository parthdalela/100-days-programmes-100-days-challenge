//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
#include <stdio.h>
void mergeSortedArrays(int* nums1, int size1, int* nums2, int size2, int* merged) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (nums1[i] < nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }
    while (i < size1) {
        merged[k++] = nums1[i++];
    }
    while (j < size2) {
        merged[k++] = nums2[j++];
    }
}
int main() {
    int m, n;
    printf("Enter the size of the first array: ");
    scanf("%d", &m);
    int nums1[m];
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &n);
    int nums2[n];
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }
    int merged[m + n];
    mergeSortedArrays(nums1, m, nums2, n, merged);
    for (int i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}
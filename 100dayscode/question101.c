//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include<stdio.h>
int main()
{
    int n, target;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the elements of the sorted array:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    printf("Enter the target integer: ");
    scanf("%d", &target);
    for(int i = 0; i < n; i++)
    {
        if(nums[i] == target)
        {
            printf("%d\t",i);break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(nums[i]==target)
        {
            printf("%d\n",i);break;
        }
    }
    return 0;
}
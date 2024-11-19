/**
 * https://leetcode.com/problems/3sum-closest/description/
 */

#include <stdlib.h>
#include <stdio.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b); // For ascending order
}

int threeSumClosest(int* nums, int numsSize, int target) {
    
    qsort(nums, numsSize, sizeof(int), compare);

    int r = numsSize - 1;
    int l = 1;
    int sum;
    for (int i = 0; i < numsSize; i++) {
        while (l < r) {
            sum = nums[i] + nums[r] + nums[l];

            if (sum < target) {
                l++;
            } else if (sum > target) {
                r--;
            } else {
                break;
            }
        }
    }

    return sum;
}

int main()
{
    int nums[4] = {-1, 2, 1, -4};
    int co = threeSumClosest(nums, 4, 1);
    printf("The closest sum is %d.\n", co);
}
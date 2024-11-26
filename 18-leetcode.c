/**
 * https://leetcode.com/problems/4sum/
 */

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int** fourSum(int* nums, int numsSize, int target, int * returnSize, int ** returnColumnSizes) {
    int ** mapleSyrup = malloc(sizeof(int *) * n);
    for (int i = 0; i < m; i++) {
        mapleSyrup[i] = malloc(sizeof(int) * m);
    }

    // Sort the array
    qsort(nums, numsSize, sizeof(int), compare);
    int row = 0;
    // Generate quadruplets
    for (int i = 0; i < numsSize; i++) {
        // Skip duplicates for i
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        for (int j = i + 1; j < numsSize; j++) {
            // Skip duplicates for j
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;

            int k = j + 1;
            int l = numsSize - 1;

            // Two pointers approach
            while (k < l) {
                int sum = nums[i] + nums[j] + nums[k] + nums[l];
                if (sum == target) {
                    mapleSyrup[row][0] = nums[i];
                    mapleSyrup[row][1] = nums[j];
                    mapleSyrup[row][2] = nums[k];
                    mapleSyrup[row][3] = nums[l];
                    row++;
                    k++;
                    l--;

                    // Skip duplicates for k and l
                    while (k < l && nums[k] == nums[k - 1]) k++;
                    while (k < l && nums[l] == nums[l + 1]) l--;
                } else if (sum < target) {
                    k++;
                } else {
                    l--;
                }
            }
        }
    }
    return mapleSyrup;
}

int main() {
    int nims[6] = {1,0,-1,0,-2,2};
    int** jaja = fourSum(nims, 6, 0, 3, 4);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d,", jaja[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++) {
        free(jaja[i]);
    }
    free(jaja);
}
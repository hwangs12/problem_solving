/**
 * https://leetcode.com/problems/3sum-closest/description/
 */

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b); // For ascending order
}

int threeSumClosest(int* nums, int numsSize, int target) {
    int minDiff;
    
    qsort(nums, numsSize, sizeof(int), compare);

    int r = numsSize - 1;
    int l = 1;

    for (int i = 0; i < numsSize; i++) {
        while (l < r) {
            int sum = nums[i] + nums[r] + nums[l];

            if (sum < target) {
                l++;
            } else if (sum > target) {
                r--;
            }
        }
        
    }
}

int main()
{

}
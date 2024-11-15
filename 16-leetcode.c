/**
 * https://leetcode.com/problems/3sum-closest/description/
 */

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b); // For ascending order
}
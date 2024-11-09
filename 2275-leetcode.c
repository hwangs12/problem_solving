/**
 * https://leetcode.com/problems/largest-combination-with-bitwise-and-greater-than-zero
 */

#include <stdio.h>

int largestCombination(int* candidates, int candidatesSize) {
    int count = 0;
    int maxCount = 0;
    int checkDigit = 1;
    while (checkDigit < 10000000)
    {
        for (int i = 0; i < candidatesSize; i++)
        {
            if ((candidates[i] & checkDigit) == checkDigit) {
                count++;
            }
        }
        if (maxCount < count) {
            maxCount = count;
        }
        count = 0;
        checkDigit *= 2;
    }
    return maxCount;
}

int main()
{
    int i[7] = {8, 8};
    int coco = largestCombination(i, 7);
    printf("%d\n", coco);
    return 0;
}
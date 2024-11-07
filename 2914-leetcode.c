/**
 * https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/description/
 */

#include <stdio.h>
#include <string.h>

int minChanges(char* s)
{
    int count = 0;
    for (int i = 0; i + 1 < strlen(s); i+=2)
    {
        if (s[i] != s[i+1])
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char * coco = "10001011";
    int nana = minChanges(coco);
    printf("%d", nana); // answer should be 2. 
    return 0;
}
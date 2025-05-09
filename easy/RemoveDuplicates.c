// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int *nums, int numsSize);

int main()
{
    int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int i;

    int k = removeDuplicates(nums, numsSize);

    for (i = 0; i < k; i++)
        printf("%d ", nums[i]);
}

int removeDuplicates(int *nums, int numsSize)
{
    int i = 0, k = 1;

    while (i < numsSize - 1)
    {
        if (nums[i] == nums[i + 1])
            i++;
        else
        {
            nums[k] = nums[i + 1];
            k++;
            i++;
        }
    }

    return k;
}
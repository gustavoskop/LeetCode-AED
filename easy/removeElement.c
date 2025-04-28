// https://leetcode.com/problems/remove-element/

#include <stdio.h>

int removeElement(int *nums, int numsSize, int val);

int main()
{
    int nums[] = {3, 2, 2, 3};
    int size = sizeof(nums) / sizeof(nums[0]);
    int val = 3;

    int newSize = removeElement(nums, size, val);

    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int removeElement(int *nums, int numsSize, int val)
{
    int i, j, n;
    for (i = 0; i < numsSize; i++)
    {
        if (val == nums[i])
        {
            n = i;

            for (j = i; j < numsSize - 1; j++)
            {
                nums[n] = nums[j + 1];
                n++;
            }

            numsSize--;

            if (val == nums[i])
                i--;
        }
    }

    return numsSize;
}
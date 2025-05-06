// https://leetcode.com/problems/build-array-from-permutation/?envType=daily-question&envId=2025-05-06

#include <stdio.h>
#include <stdlib.h>

int *buildArray(int *nums, int numsSize, int *returnSize);

int main()
{
    int nums[] = {0, 2, 1, 5, 3, 4}; // output 012453
    //int nums[] = {5,0,1,2,3,4}; // output 450123
    int i, *array, numsSize = sizeof(nums) / sizeof(nums[0]), returnSize;

    array = buildArray(nums, numsSize, &returnSize);

    for (i = 0; i < returnSize; i++)
    {
        printf("%d", array[i]);
    }

    free(array);
}

int *buildArray(int *nums, int numsSize, int *returnSize)
{
    int i, *array;

    array = (int *)malloc(sizeof(int) * numsSize);

    for (i = 0; i < numsSize; i++)
    {
        array[i] = nums[nums[i]];
    }

    *returnSize = numsSize;
    return array;
}
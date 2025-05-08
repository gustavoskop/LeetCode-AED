// https://leetcode.com/problems/two-sum/

#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize);

int main()
{
    int *resultado;
    int nums[] = {2, 7, 11, 15};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 9;
    int returnSize;

    resultado = twoSum(nums, numsSize, target, &returnSize);

    printf("%d ", resultado[0]);
    printf("%d", resultado[1]);

    free(resultado);
}

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int i, j, *array;

    array = malloc(sizeof(int) * 2);

    for (i = 0; i < numsSize; i++)
        for (j = i + 1; j < numsSize; j++)
            if (nums[i] + nums[j] == target)
            {
                array[0] = i;
                array[1] = j;
                *returnSize = 2;
                return array;
            }

    return 0;
}
// leetcode.com/problems/number-of-good-pairs/

int numIdenticalPairs(int* nums, int numsSize) {
    int i, j, count = 0;

    for (i = 0; i < numsSize; i++)
        for (j = 0; j < numsSize; j++)
            if (nums[i] == nums[j] && i < j)
                count++;

    return count;
}
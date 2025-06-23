int removeDuplicates(int* nums, int numsSize) {
    int* p = NULL;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == nums[i - 1]) {

            p = &nums[i];
            *p++;
            while (i < numsSize - 1 && *p == nums[i]) {
                for (int j = i + 1; j < numsSize - 1; j++) {
                    nums[j] = nums[j + 1];
                }
                numsSize--;
            }
            if (i < numsSize - 1 && nums[i] == *p)
                i--;
        }
    }
    return numsSize;
}

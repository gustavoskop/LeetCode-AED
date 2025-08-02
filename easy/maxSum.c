int maxSum(int* nums, int numsSize) {
    int flag = 0, max = -100, sum = 0, n[101];

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < 0 && nums[i] > max)
            max = nums[i];
        if (nums[i] < 0 || n[nums[i]] == 1)
            continue;
        else {
            flag = 1;
            sum += nums[i];
        }
        n[nums[i]] = 1;
    }
    if (flag == 0)
        return max;
    return sum;
}
/*
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findKDistantIndices(int* nums, int numsSize, int key, int k, int* returnSize) {
    int *ans, m = 0;
    ans = (int *)malloc (sizeof(int) * numsSize);
    for (int i = 0; i < numsSize; i++){
        if (nums[i] == key){
            for(int j = m; j < numsSize; j++)
                if(abs(i - j) <= k){
                    if(m > 0 && ans[m - 1] == j)
                        continue;
                    ans[m++] = j;
                }   
        }
    }
    *returnSize = m;
    return ans;
}
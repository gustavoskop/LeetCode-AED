/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int i, j, count, *ans;

    ans = (int *) malloc (sizeof(int) * nums1Size);

    for (i = 0; i < nums1Size; i++){
        count = 0;
        j = 0;
        while (j < nums2Size){
           if (nums2[j] == nums1[i]){
            j++;
            while(j < nums2Size && nums2[j] < nums1[i]){
                j++;
           }
            break;
        }
            j++;
        }

        if (j == nums2Size)
            ans[i] = -1;
            else
            ans[i] = nums2[j];

    }
    *returnSize = nums1Size;
    return ans;
}
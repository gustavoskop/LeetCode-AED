// https://leetcode.com/problems/count-subarrays-of-length-three-with-a-condition/


#include <stdio.h>


int countSubarrays(int* nums, int numsSize);

int main(){

    int nums[] = {1, 2, 1, 4, 1}, numsSize = 5;
    //int nums[] = {1, 1, 1}, numsSize = 3;

    printf("%d", countSubarrays(nums, numsSize));

}



int countSubarrays(int* nums, int numsSize) {
    int i, n1, n2, n3, count = 0;

    for (i = 0; i < (numsSize - 2); i++ ){
        n1 = nums[i];
        n2 = nums[i + 1];
        n3 = nums[i + 2];

        if ((n1 + n3) * 2 == n2)
        count++;
    }
    return count;
}
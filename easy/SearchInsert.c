//https://leetcode.com/problems/search-insert-position/description/?envType=problem-list-v2&envId=array

#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target);

int main(){
    int nums[] = {1, 3, 5, 6}, numsSize = 4;
    int target = 5;
    //int target = 2;
    //int target = 7;

    printf("%d", searchInsert(nums, numsSize, target));

}

int searchInsert(int* nums, int numsSize, int target) {
    int i;
    
    for(i = 0; i < numsSize; i++){
    if (nums[i] >= target){
        return i;
    }
    }
    return numsSize;
}
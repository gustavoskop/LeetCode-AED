//https://leetcode.com/problems/type-of-triangle/description/

char* triangleType(int* nums, int numsSize) {
    
    if(nums[0] + nums[1] > nums[2] && nums[1] + nums[2] > nums[0] && nums[0] + nums[2] > nums[1]){
    if(nums[0] == nums[1] || nums[0] == nums[2] || nums[1] == nums[2]){
        if(nums[0] == nums[2] && nums[1] == nums[2])
            return "equilateral";
        else return "isosceles";
    }
    return "scalene";
}
    return "none";
}
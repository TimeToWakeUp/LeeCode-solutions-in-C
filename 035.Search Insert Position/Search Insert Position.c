int searchInsert(int* nums, int numsSize, int target) {
    if(target<=nums[0])
        return 0;
    for(int i=1;i<numsSize;i++)
        if(nums[i]==target||(nums[i-1]<target&&target<nums[i]))
            return i;
    return numsSize;
}

int maxSubArray(int* nums, int numsSize) {
    int ThisSum=0;
    int MaxSum=nums[0];
    
    
    for(int i=0;i<numsSize;i++)
    {
        if(ThisSum>0)
            ThisSum+=nums[i];
        else
            ThisSum=nums[i];
        if(ThisSum>MaxSum)
            MaxSum=ThisSum;
    }
    return MaxSum;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int *ptd,*ptds;
    ptds=ptd=(int*)malloc(2*sizeof(int));
    
    int i,j;
    for(i=0;i<numsSize;i++)
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                *ptd++=i;
                *ptd++=j;
            }
        }
    return ptds;
}

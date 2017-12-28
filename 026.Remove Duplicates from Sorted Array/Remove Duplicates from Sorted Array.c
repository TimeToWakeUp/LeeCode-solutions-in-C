-----------------
//方法1
int removeDuplicates(int* nums, int numsSize) {
    
    for(int i=0;i+1<numsSize;i++)
    {
        if(nums[i]==nums[i+1])
        {
            for(int j=i;j+1<numsSize;j++)
                nums[j]=nums[j+1];
            numsSize--;
            i--;
        }
    }
    return numsSize;
}
-----------------

-----------------
//方法2
int removeDuplicates(int* nums, int numsSize) {
    if(numsSize==0)
        return 0;
    int i,j;
    for(i=1,j=0;i<numsSize;i++)
    {
        if(nums[i]!=nums[i-1])
            nums[++j]=nums[i];
    }
    return j+1;
}
-----------------

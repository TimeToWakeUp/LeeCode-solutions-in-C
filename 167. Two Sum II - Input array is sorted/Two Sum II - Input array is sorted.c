/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int left=0;
    int right=numbersSize-1;
    
    while(numbers[left]+numbers[right]!=target)
    {
        if(numbers[left]+numbers[right]<target)  left++;
        else  right--;
    }
    *returnSize=2;
    int *ret=(int*)malloc(sizeof(int)*2);
    ret[0]=left+1;
    ret[1]=right+1;
    return ret;
}

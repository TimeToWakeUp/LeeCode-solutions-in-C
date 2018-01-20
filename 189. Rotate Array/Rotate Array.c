void rotate(int* nums, int numsSize, int k) {
    if(numsSize<=0||k<=0)  return;
    int *numscopy=(int*)malloc(sizeof(int)*numsSize);
    for(int i=0;i<numsSize;i++)  
        numscopy[i]=nums[i];   //复制数组
    for(int i=0;i<numsSize;i++) 
        nums[(i+k)%numsSize]=numscopy[i];  //数组的下标为i的元素与其向右走k步的元素相等
}

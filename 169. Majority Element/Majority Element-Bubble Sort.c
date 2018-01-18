int majorityElement(int* nums, int numsSize) {
    int flag,tmp;
    for(int i=numsSize-1;i>0;i--)  //外循环：每次找到数组未排序元素的最大者，放到数组的后面，从数组的尾开始放起，最大的元素放在数组的尾，次大的元素
    {                              //放在数组的倒数第二位
        flag=0;
        for(int j=0;j<i;j++)      //内循环：一趟冒泡，找出数组剩余的未排序的元素中的最大者
        {
            if(nums[j]>nums[j+1])
            {
                tmp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=tmp;
                flag=1;
            }
        }
        if(flag==0)  break;     //没有进入内循环，则说明整个数组都已排好序，则退出循环
    }
    return nums[numsSize/2];    //因为主要的元素出现的次数超过numsSize/2，则排好序后的数组的正中间的元素一定是主要的元素
}

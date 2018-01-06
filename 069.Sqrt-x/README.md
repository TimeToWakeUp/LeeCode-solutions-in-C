解题思路：
===
1、本题首先很容易想到的一个方法是让i从1开始遍历到x，如果找到i*i<x且(i+1)*(i+1)>x，或者直接找到i*i=x，则返回i。但是这种方法效率太低，故采用二分查找来实现<br>
2、要注意的是溢出，即当left和right都很大的时候，left+right可能会产生溢出现象（left+right>INT_MAX），故中值mid = left + (right - left)/2，而不是mid = (right+left)/2<br>

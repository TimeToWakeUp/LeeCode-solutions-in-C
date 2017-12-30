解题思路：
===
1、首先要理解清楚题目的意思：第i+1个序列是第i个序列的Count and Say。如第3个序列是21，则第4个序列就是1211<br>
2、由1分析可知，要知道第n个序列，必须要知道第n-1个序列，故本题采用从第1个序列开始遍历直到得到第n个序列（外循环while(--n）的实现)<br>
3、针对当前的每一个序列cur，需要对齐进行遍历（次外循环while(cur[i]!='\0')实现），统计相同的连续字符的个数（内循环while(cur[i]==cur[i+1])实现），进而根据当前序列得到下一序列next<br>
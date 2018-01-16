解题思路：
===
本题可看做是求最大子列和问题(Max Subarray)，本质上也是一个动态规划问题，利用第i天的最大收益MaxCur(i)等于第i-1天的最大收益MaxCur(i-1)+今天的收益price[i]-price[i-1]。如果MaxCur(i)<0，则把MaxCur(i)复位为0。如果MaxCur大于到目前为止的最大收益MaxSofar，则把MaxSofar进行更新。

解题思路：
===
本题是一个典型的杨辉三角的问题，题目要求给出杨辉三角的行数，返回具体的杨辉三角。要解决该问题，首先我们要清楚杨辉三角的性质：<br>
    (1)杨辉三角每行的元素个数等于该行对应的行数<br>
    (2)杨辉三角每行的首尾元素都是1，其它的元素等于各自对应的上一行正上方的两个元素的和，即C(i,j)=C(i-1,j-1)+C(i-1,j)
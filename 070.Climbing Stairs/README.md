解题思路：
===
本题是一个斐波那契数列，如果能发现这一点，本题就很容易解决了<br>
1、当n为1时，way=1<br>
   当n为2时，way=2<br>
   当n为3时，way=3<br>
   当n为4时,way=5<br>
   ...
   故可判断本题为斐波那契数列，则way(n)=way(n-1)+way(n-2)

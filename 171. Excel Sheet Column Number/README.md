解题思路：
===
在做了题168. Excel Sheet Column Title，知道了看成是二十六进制来解决该类问题后，这类问题就很容易了。本题是题168. Excel Sheet Column Title的逆问题，同样的还是采用看成是二十六进制来解决，唯一要注意的是，本题遍历字符串的字符的循环中的递推关系式，采用和求多项式在给定值一样的方案，即f(x)=A0+A1*x+A2*x^2+A3*x^3+...+An*x^n=x(...x(An-1+An*x)...)+A0

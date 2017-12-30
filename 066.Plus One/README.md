解题思路：
===
1、首先要明确题目的意思：<br>
    对于一个非负整数，如4321，把它的每一位都单独提取出来放到一个数组里，即[4,3,2,1]，然后对其个位加1，计算加1后该数组的长度，并返回该数组。这里要<注意的是进位的问题，如对于99，即[9,9]，个位加1后为[1,0,0]，数组长度改变了。其次要明确的是函数传入的digits实参是把非负整数挨个位提取出来后的数组，如对于4321，则digits数组为[4,3,2,1]<br>
2、由于digits数组的最后一个元素代表原非负整数的个位，则对于digits数组的遍历采用从尾到头进行遍历。<br>
3、把digits数组的最后一个元素与9进行比较，如果等于9，则需要进位，并且要把倒数第二个元素也与9进行比较，如果数组倒数第二个元素也是9，则仍需要进位，以此类推<br>
4、如果digits数组的第二个元素仍需要向前进位，且第一个元素仍是9的话，则数组的长度需要加1，此时便开辟一个新数组。
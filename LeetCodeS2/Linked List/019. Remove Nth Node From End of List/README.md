解题思路：
===
本题的解法比较灵活，新建两个指针HEAD1和HEAD2，首先让HEAD1领先HEAD2 n个位置，然后当HEAD1遍历链表且位于链表的最后一个节点时，HEAD2刚好位于需要删除的节点的前一个节点，此时改变相应指针问题就得以解决，不过需要单独考虑删除的节点为链表的第一个节点的情况。本题还有第二种解法，具体就是先用一个指针遍历链表求出链表的长度ListLength，然后用另一个指针从链表的头遍历到链表的第ListLength-n-1个位置，即是从右往左数链表的第n+1个节点的位置，即得到了需要删除的节点的前一个节点
解题思路：
===
本题的解法和19. Remove Nth Node From End of List题很类似，关键是找到从链表的尾节点向表头数第k+1个节点。具体采用的方法是：定义一前一后两个指针先遍历整个链表，获取链表的长度ListLength，本题的解法和19. Remove Nth Node From End of List题很类似，关键是找到从链表的尾节点向表头数第k+1个节点。具体采用的方法是：定义一前一后两个指针pFront和pBehind。先用pFront遍历整个链表，获取链表的长度ListLength，再让pBehind从表头移动ListLength - k % ListLength（考虑到k有可能大于ListLength，且k大于ListLength时，其结果与k%ListLength的结果相同）个节点到达需要翻转的节点的前一个节点，即我们需要找的节点。然后改变相关的节点的指向即可。

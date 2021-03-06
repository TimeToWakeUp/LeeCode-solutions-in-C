解题思路：
===
    本题要求时间复杂度为线性，空间复杂度为O(1),这就增大了题目的难度，不然可以采取笨方法，用NodeA指针遍历A链表，用NodeB指针循环遍历B链表，把A链表中的所有指针，一个一个地与B链表中的指针进行比较，看是否相等。如果有相等的，则说明A和B有交叉，返回交叉点<br>
    根据上述叙述，只能想一种取巧的方法来实现，如果能够想到遍历合并链表（A与B合并）来实现，题目就简单了：<br>
        1、同样用两个指针NodeA和NodeB分别对链表A和B进行遍历，每次均走一步，当出现NodeA=NodeB时，则找到了交叉点NodeA/NodeB<br>
        2、如果NodeA遍历完链表A，仍未找到交叉点，则令NodeA=HeadB（B链表的头指针），即让NodeA紧接着遍历链表B。同理，对于NodeB也是一样<br>
        3、如果链表A和B有交叉点，则遍历合并链表的过程中，总会出现NodeA=NodeB，此时的NodeA/NodeB即为交叉点。相反，如果没有交叉点，则遍历合并链表的过程中就不会出现NodeA=NodeB，此时遍历完合并链表后就停止遍历<br>
    举例：如A：[1,3,5,7,9,11]，B:[2,4,9,11]，则NodeA会遍历[1,3,5,7,9,11,2,4,9,11]，NodeB会遍历[2,4,9,11,1,3,5,7,9,11]。由于两个指针NodeA和NodeB遍历速度一样，则会得到交叉点<br>
    本题之所以可以这么做的原理是因为题目的意思是，只要是两个链表A和B有交叉，则会从交叉点至链表的结尾，两个链表的元素是完全一样的。故只要有交叉，合并链表的结尾的元素一定是交叉段的最后一个元素。也就是说，合并链表的结尾处的一段元素就是交叉段的元素<br>

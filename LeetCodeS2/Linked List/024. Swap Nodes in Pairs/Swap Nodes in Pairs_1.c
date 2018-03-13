/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)  return head;  //链表为空或者只有1个元素时，直接返回原链表
        //为了更简单的介绍下面代码的原理，以1-2-3-4链表为例，交换后应为2-1-4-3
        ListNode* Newhead = head->next;  //Newhead指向2，head指向1。
        head->next = swapPairs(Newhead->next);  //进行两个相邻对的节点之间的连接，即让1指向4。具体是1要接下一对相邻节点交换后的第一个节点，3-4交换                                                 //后为4-3，即接4（swapPairs返回的是Newhead）。同时函数传入的参数是交换前的第一个节点。
        Newhead->next = head; //交换相邻节点
        return Newhead;  
    }
};

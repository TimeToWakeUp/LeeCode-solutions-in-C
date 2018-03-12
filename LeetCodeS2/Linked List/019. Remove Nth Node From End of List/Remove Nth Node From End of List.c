/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* HEAD1 = head;
    struct ListNode* HEAD2 = head;
    
    //让HEAD1领先HEAD2 n个位置
    for(int i = 0; i < n; i++)
    {
        HEAD1 = HEAD1->next;
        if(HEAD1 == NULL)  return head->next; //单独处理删除第一个节点的情况
    }
    //当HEAD1位于链表的最后一个节点时，HEAD2位于需要删除的节点的前一个节点
    while(HEAD1->next != NULL)
    {
        HEAD1 = HEAD1->next;
        HEAD2 = HEAD2->next;
    }
    HEAD2->next = HEAD2->next->next;
    return head;
}

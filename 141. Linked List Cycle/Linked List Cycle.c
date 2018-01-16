/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *fast,*slow; //定义两个指针fase和slow，fast每次走两步,slow每次走一步
    fast=slow=head;
    
    while(fast)
    {
        if(slow->next==NULL||fast->next==NULL)  break;
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)  return true;  //如果有环，则当fast和slow都在环中时，由于每次fast比slow多走一步，故终究会追上slow。反之fast等于slow，则说明有环
    }
    return false;  //遇到NULL遍历完整个链表，则说明链表中没有环
}

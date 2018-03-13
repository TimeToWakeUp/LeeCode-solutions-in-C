/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if(head == NULL || head->next == NULL) return head;
    struct ListNode* HEAD1 = head->next;
    struct ListNode* HEAD2 = head;
    struct ListNode* TmpCella, *TmpCellb;
    TmpCella = TmpCellb = head;
    head = head->next; //当链表的节点数不小于2时，交换相邻的节点后的链表的起始节点是原来的第二个节点
    
    while(TmpCella != NULL && HEAD1 != NULL)
    {
        //交换链表的相邻节点
        TmpCella = HEAD1->next;
        HEAD1->next = HEAD2;
        TmpCellb = HEAD2;
        
        //结合实际的例子，分链表的节点数是偶数个或者奇数个进行讨论
        if(TmpCella != NULL)
        {
            HEAD1 = TmpCella->next;
            HEAD2 = TmpCella;
            if(HEAD1 != NULL)
            {
                TmpCellb->next = HEAD1;
                HEAD2->next = NULL;
            }
            else
                TmpCellb->next = HEAD2;
        }
        else if(TmpCellb != NULL)  HEAD2->next = NULL;
    }
    return head;
}

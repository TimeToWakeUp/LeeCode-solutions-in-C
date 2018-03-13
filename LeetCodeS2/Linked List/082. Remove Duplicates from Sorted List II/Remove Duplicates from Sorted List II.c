/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* pNew = (struct ListNode*)malloc(sizeof(struct ListNode));  //为了避免单独讨论链表为空的情况，故新开辟一个头结点
        pNew->val = INT_MAX;
        pNew->next = head;
        struct ListNode* pNow = pNew;  //pNow用于遍历链表，是重复节点的前一个不重复的节点，如1-2-3-3-3，则pNow指向2
        int duplicate;  //duplicate用于保存重复的节点的值
        
        while(pNow->next && pNow->next->next)  //遍历链表，因为pNow初始化为新开辟的头结点，则判断条件写为所示的这样。
        {                                      //比如比较链表的第一个节点和第二个节点就得这样写
            if(pNow->next->val == pNow->next->next->val)  //出现重复的节点
            {
                duplicate = pNow->next->val;  //保存重复的节点的值
                while(pNow->next && pNow->next->val == duplicate)  //考虑到可能出现多个重复的节点，pNow是重复节点的前一个
                    pNow->next = pNow->next->next;                 //不重复的节点，所以循环判断条件写为所示的这样
            }
            else  //没有出现重复的节点
            {
                pNow = pNow->next;
            }
        }
        return pNew->next;
}

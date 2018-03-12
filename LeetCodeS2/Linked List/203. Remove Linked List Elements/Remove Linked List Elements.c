/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode*TmpCell = (struct ListNode*)malloc(sizeof(struct ListNode));
    TmpCell->val = INT_MAX;
    TmpCell->next = head;
    struct ListNode* PBefore = TmpCell;
    struct ListNode* PNow = PBefore->next;
    struct ListNode* Next = NULL;
    while(PNow)
    {
        Next = PNow->next;
        if(PNow->val != val)
        {
           PBefore = PNow;
        }
        else
        {
            PBefore->next = PNow->next;
            free(PNow);
        }
        PNow = Next; 
    }
    return TmpCell->next;
}

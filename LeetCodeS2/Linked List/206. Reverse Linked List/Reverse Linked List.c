/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if(head == NULL || head->next == NULL)  return head;
    struct ListNode* PBefore = (struct ListNode*)malloc(sizeof(struct ListNode));
    PBefore->val = INT_MAX;
    PBefore->next = head;
    struct ListNode* PNow = head, *TmpCell = NULL;
    
    while(PNow != NULL)
    {
        TmpCell = PNow->next;
        PNow->next = PBefore;
        PBefore = PNow;
        PNow = TmpCell;
    }
    head->next = NULL;
    head = PBefore;
    //free(PBefore);
    return head;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head==NULL||head->next==NULL)
        return head;
    struct ListNode *before=(struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *tmp=before;
    before->next=head;
    struct ListNode *now=head;
    before=now;
    now=now->next;
    while(now)
    {
        if(before->val==now->val)
        {
            before->next=now->next;
            now=now->next;
            continue;
        }
        before=now;
        now=now->next;
    }
    free(tmp);
    return head;
}

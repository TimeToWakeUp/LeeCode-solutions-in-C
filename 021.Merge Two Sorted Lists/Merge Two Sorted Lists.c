/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* rear=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* l,*front=rear;
    
     if (l1 == NULL)
        return l2;
    if (l2 == NULL)
        return l1;
    
    while(l1&&l2)
    {
        if(l1->val<=l2->val)
        {
            rear->next=l1;
            l1=l1->next;
            rear=rear->next;
        }
        else
        {
            rear->next=l2;
            l2=l2->next;
            rear=rear->next;
        }
    }
    while(l1)
    {
        rear->next=l1;
        l1=l1->next;
        rear=rear->next;
    }
     while(l2)
    {
        rear->next=l2;
        l2=l2->next;
        rear=rear->next;
    }
    l=front->next;
    free(front);
    return l;
}

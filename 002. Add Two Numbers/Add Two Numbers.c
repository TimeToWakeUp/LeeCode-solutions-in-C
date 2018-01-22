/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry=0;
    struct ListNode* tmp=malloc(sizeof(struct ListNode));
    struct ListNode* ret=tmp;
    while(l1&&l2)
    {
        struct ListNode* l=malloc(sizeof(struct ListNode));
        l->next=NULL;
        tmp->next=l;
        tmp=l;
        if(l1->val+l2->val+carry>9)   //有进位
        {
            l->val=l1->val+l2->val+carry-10;
            carry=1;
        }
        else    //没有进位
        {
            l->val=l1->val+l2->val+carry;
            carry=0;
        }
        l1=l1->next;
        l2=l2->next;
        if(l1==NULL&&l2==NULL&&carry==1) //单独处理最高位也产生进位的情况，如523+523=1046
        {
            struct ListNode* l=malloc(sizeof(struct ListNode));
            l->next=NULL;
            l->val=1;
            tmp->next=l;
        }
    }
    while(l1)
    {
        struct ListNode* l=malloc(sizeof(struct ListNode));
        l->next=NULL;
        if(l1->val+carry>9)
        {
            l->val=l1->val+carry-10;
            carry=1;
        }
        else 
        {
            l->val=l1->val+carry;
            carry=0;
        }
        tmp->next=l;
        tmp=l;
        l1=l1->next;
        if(l1==NULL&&carry==1)
        {
            struct ListNode* l=malloc(sizeof(struct ListNode));
            l->next=NULL;
            l->val=1;
            tmp->next=l;
        }
    }
     while(l2)
    {
        struct ListNode* l=malloc(sizeof(struct ListNode));
        l->next=NULL;
        if(l2->val+carry>9)
        {
            l->val=l2->val+carry-10;
            carry=1;
        }
        else
        {
            l->val=l2->val+carry;
            carry=0;
        }
        tmp->next=l;
        tmp=l;
        l2=l2->next;
        if(l2==NULL&&carry==1)
        {
            struct ListNode* l=malloc(sizeof(struct ListNode));
            l->next=NULL;
            l->val=1;
            tmp->next=l;
        }
    }
    return ret->next;
}

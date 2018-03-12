/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head == NULL || head->next == NULL)  return head;
    struct ListNode* pBehind = (struct ListNode*)malloc(sizeof(struct ListNode)); //引入头结点，则重复元素在链表的开头与在链表的中间两种情况
    pBehind->val = INT_MAX;                                                       //处理方式一样，唯一不同的是重复元素在表头时要移动head指针
    pBehind->next = head;
    struct ListNode* pFront = head;
    
    
    while(pFront->next != NULL)
    {
        //处理相邻的重复节点
        if(pFront->val == pFront->next->val)
        {
            pFront = pFront->next->next;
            if(pFront == NULL) //单独考虑重复元素在链表结尾的情况，如1-2-3-3
            {
                if(pBehind->next == head)  return NULL;  //单独考虑重复元素同时在表头和表尾这种情况，如1-1
                else
                {
                    pBehind->next = NULL;
                    return head;
                }
            }
            while(pBehind->next->val == pFront->val)  
            {
                pFront = pFront->next;  //考虑到有可能连续出现多个重复的节点，如1-1-1-2-3
                if(pFront == NULL)  break;
            }
            if(pBehind->next == head)  head = pFront; //如果重复元素出现在表头，则需要移动head指针
            pBehind->next = pFront;
        }
        else //没有出现相邻的重复节点
        {
            pFront = pFront->next;
            pBehind = pBehind->next;
        }
        if(pFront == NULL)  return head;
    }
    return head;
}

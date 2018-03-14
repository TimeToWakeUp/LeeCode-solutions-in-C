/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(head == NULL || head->next == NULL)  return  head;
    struct ListNode* pHead = (struct ListNode*)malloc(sizeof(struct ListNode));
    pHead->val = INT_MAX;
    pHead->next = head;
    struct ListNode* pFront = pHead;
    struct ListNode* pBehind = pHead;
    struct ListNode* TmpCell;
    int ListLength = 0;
    
    //考虑到k大于链表长度ListLength时，其与k%ListLength结果相同，故用pFront遍历完整个链表，获取链表长度
    while(pFront->next != NULL)  //因为要让pFront指向最后一个节点，故循环判断条件使用pFront->next != NULL
    {
        pFront = pFront->next;
        ListLength++;
    }
    
    //让pBehind指向从链表右侧数第k%ListLength+1个节点
    for(int i = 0; i < ListLength - k % ListLength; i++)
    {
        pBehind = pBehind->next;
    }
    if(pBehind == pFront)  return head;  //k为链表的长度时，直接返回head
    //改变链表相应指针的指向
    TmpCell = pBehind->next;
    pBehind->next = NULL;
    pFront->next = head;
    head = TmpCell;
    return head;
}

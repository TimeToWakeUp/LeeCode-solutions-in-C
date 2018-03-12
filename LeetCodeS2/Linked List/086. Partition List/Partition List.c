/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* partition(struct ListNode* head, int x) {
    if(head == NULL || head->next == NULL)  return head;  //链表为空或者链表只有一个元素的时候，直接返回head
    struct ListNode* P = head;  //p用来遍历链表
    struct ListNode* pNew = (struct ListNode*)malloc(sizeof(struct ListNode)); 
    pNew->val = INT_MAX;
    pNew->next = head;
    struct ListNode* pUp = pNew;  //pUp用来串接不小于x的节点
    struct ListNode* pDown = pNew;  //pDown用来串接小于x的节点
    struct ListNode* pTmpCella = NULL;  //pTmpCella用来保存第一个值不小于x的节点的位置
    struct ListNode* pTmpCellb = head;  //pTmpCella用来保存第一个值小于x的节点的位置
    int UpCount = 0;  //UpCount用来计数值不小于x的节点的个数
    int DownCount = 0;  //UpCount用来计数值小于x的节点的个数
    
    //遍历链表
    while(P)
    {
        if(P->val < x)  //串接值小于x的节点
        {
            pDown->next = P;
            pDown = P;
            DownCount++;
            if(DownCount == 1)  pTmpCellb = pDown;  //保存第一个值小于x的节点的位置
        }
        else  //串接值不小于x的节点
        {
            pUp->next = P;
            pUp = P;
            UpCount++;
            if(UpCount == 1)  pTmpCella = pUp;  //保存第一个值不小于x的节点的位置
        }
        P = P->next;
    }
    //合并值小于x的节点链表与值不小于x的节点链表
    pDown->next = pTmpCella;
    pUp->next = NULL;
    free(pNew);
    head = pTmpCellb;  //第一个值小于x的节点总是需要返回的链表的第一个节点
    return head;
}

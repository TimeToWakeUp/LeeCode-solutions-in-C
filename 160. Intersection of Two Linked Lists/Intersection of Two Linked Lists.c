/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode * NodeA=headA;
    struct ListNode * NodeB=headB;
    if(NodeA==NULL||NodeB==NULL)  return NULL;
    while(NodeA!=NULL||NodeB!=NULL) //两个指针NodeA和NodeB均遍历到合并链表的结尾，说明没有两个链表交叉，退出
    {
        if(!NodeA) NodeA=headB;  //遍历合并链表，即对于A链表，遍历完A自身后，再去遍历B链表
        if(!NodeB) NodeB=headA;  //遍历合并链表，即对于B链表，遍历完B自身后，再去遍历A链表
        if(NodeA==NodeB) return NodeA; //遍历的过程中两个指针相等，说明有交叉，此时的指针即是交叉点，返回交叉点
        NodeA=NodeA->next;
        NodeB=NodeB->next;
    }
    return NULL;
}

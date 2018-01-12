/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(p==NULL||q==NULL)
        return p==q;
    bool ll,rr;
    if(p->val==q->val)
    {
        ll=isSameTree(p->left,q->left);
        rr=isSameTree(p->right,q->right);
        if(ll&&rr)
            return true;
    }
    return false;
}

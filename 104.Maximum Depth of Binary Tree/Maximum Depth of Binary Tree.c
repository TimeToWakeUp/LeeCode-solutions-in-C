/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    int HL,HR,HMax;
    if(root)
    {
        HL=maxDepth(root->left);
        HR=maxDepth(root->right);
        HMax=HL>HR? HL:HR;
        return HMax+1;
    }
    return 0;
}

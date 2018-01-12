/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSymmetricRecursive(struct TreeNode* LNode,struct TreeNode* RNode)
{
    if(LNode==NULL&&RNode==NULL)
        return true;
    if(LNode==NULL||RNode==NULL)
        return false;
    return (LNode->val==RNode->val)&&isSymmetricRecursive(LNode->left,RNode->right)&&isSymmetricRecursive(LNode->right,RNode->left);
}

bool isSymmetric(struct TreeNode* root) {
    if(root==NULL)
        return true;
    return isSymmetricRecursive(root->left,root->right);
}

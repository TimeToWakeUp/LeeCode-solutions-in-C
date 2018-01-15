/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int MaxDepth(struct TreeNode* node)
{
    if(node==NULL)
        return 0;
    else
    {
        int HMax,HL,HR;
        HL=MaxDepth(node->left);
        HR=MaxDepth(node->right);
        HMax=HL>HR?HL+1:HR+1;
        return HMax;
    }
}
bool isBalanced(struct TreeNode* root) {
    if(root==NULL)
        return true;
    else
    {
        int HL,HR;
        HL=MaxDepth(root->left);
        HR=MaxDepth(root->right);
        if(HL-HR==0||HL-HR==-1||HL-HR==1)
            return isBalanced(root->left)&&isBalanced(root->right);
        else
            return false;
    }
}

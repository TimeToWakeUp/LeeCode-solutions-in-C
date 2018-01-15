/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root) {
    if(root==NULL)
        return 0;
    int MinL,MinR,Min;
    MinL=minDepth(root->left);
    MinR=minDepth(root->right);
    if(MinL==0)
        Min=MinR+1;
    else if(MinR==0)
        Min=MinL+1;
    else
        Min=MinL<MinR?MinL+1:MinR+1;
    return Min;
}

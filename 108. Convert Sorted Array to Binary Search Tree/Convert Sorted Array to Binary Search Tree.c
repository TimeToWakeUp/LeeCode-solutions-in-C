/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* CovertToBST(int* nums, int start,int end)
{
    if(start>end)
        return NULL;
    int mid=(start+end)/2;
    struct TreeNode* T=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    T->val=nums[mid];
    T->left=CovertToBST(nums,start,mid-1);
    T->right=CovertToBST(nums,mid+1,end);
    return T;
}
struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    return CovertToBST(nums,0,numsSize-1);
}

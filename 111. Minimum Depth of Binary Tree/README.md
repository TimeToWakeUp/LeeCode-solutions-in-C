解题思路：
===
本题是要求给定的二叉树的最小深度。很容易就想到递归地求出根节点的左子树的最小深度和右子树的最小深度，取两者中的小者，加1后（深度要算上根节点）就是该二叉树的最小深度。唯一要注意的是，对于根节点的左子树或者右子树为空时，其最小深度为右子树的最小深度加1或者左子树的最小深度加1
解题思路：
===
本题实际上是考察二叉树的遍历，这里采用先序遍历，递归地求出左子树的高度HL和右子树的高度HR，取两者的大者HMax，二叉树的深度则为HMax+1
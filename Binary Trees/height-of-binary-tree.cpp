// Problem Link --> https://www.codingninjas.com/studio/problems/height-of-binary-tree_4609628
#include<bits/stdc++.h>
using namespace std;
/************************************************************
    Following is the TreeNode class structure
************************************************************/
    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val)
        {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };



int heightOfBinaryTree(TreeNode<int> *root)
{
	// Write your code here.
    if(root == NULL) return 0;
    int lh = heightOfBinaryTree(root->left);
    int rh = heightOfBinaryTree(root->right);
    return 1+max(lh, rh);
}

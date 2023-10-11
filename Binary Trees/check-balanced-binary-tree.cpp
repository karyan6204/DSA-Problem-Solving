// Problem Link --> https://www.codingninjas.com/studio/problems/is-height-balanced-binary-tree_975497
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


int check(TreeNode<int>* root){
    if(root == NULL) return 0;
    int lh = check(root->left);
    if(lh == -1) return -1;
    int rh = check(root->right);
    if(rh == -1) return -1;

    if(abs(lh - rh) > 1) return -1;
    return 1+max(lh, rh);
}
bool isBalancedBT(TreeNode<int>* root){
    // Write your code here.
    if(root == NULL) return true;
    return check(root)!=-1;
}
// Problem Link --> 
#include<bits/stdc++.h>
using namespace std;
/************************************************************
    Following is the TreeNode class structure
************************************************************/

class TreeNode
{
public:
    int data;
    TreeNode *left, *right;
    TreeNode() : data(0), left(NULL), right(NULL) {}
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};

void postOrder(TreeNode* root, vector<int>& ans){
    if(root == NULL) return;
    postOrder(root->left, ans);
    postOrder(root->right, ans);
    ans.push_back(root->data);
}

vector<int> postorderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> ans;
    postOrder(root, ans);
    return ans;
}

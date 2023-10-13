// Problem Link --> https://www.codingninjas.com/studio/problems/maximum-sum-path-of-a-binary-tree._1214968
#include<bits/stdc++.h> 
using namespace std;
/************************************************************
    Following is the BinaryTreeNode class structure
************************************************************/
    template <typename T>
    class BinaryTreeNode {
       public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };



int findMaxPath(BinaryTreeNode<int>* root, int& maxi){
    if(root==NULL) return 0;
    int lh = max(0, findMaxPath(root->left, maxi));
    int rh = max(0, findMaxPath(root->right, maxi));
    int val = root->data;
    maxi = max(maxi, (lh+rh)+val);
    return max(lh, rh)+val;
}

int maxPathSum(BinaryTreeNode<int> *root)
{
    // Write your code here
    int maxi = INT_MIN;
    findMaxPath(root, maxi);
    return maxi;
}
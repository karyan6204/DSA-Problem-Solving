// Problem Link --> https://www.codingninjas.com/studio/problems/create-binary-tree_8360671
#include<bits/stdc++.h>
using namespace std;
/*
Following is the class structure of the Node class:
*/
class Node
{
public:
    int data;
    Node *left, *right;
    Node()
    {
        this->data = 0;
        left = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data, Node* left, Node* right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};


Node* solve(int i, vector<int>& arr){
    int n = arr.size();
    Node* head = new Node(arr[i]);

    if(i>=n) return NULL;
    head->left = solve(2*i+1, arr);
    head->right = solve(2*i+2, arr);
    return head;
}

Node* createTree(vector<int>&arr){
    // Write your code here.
        return solve(0, arr);
}
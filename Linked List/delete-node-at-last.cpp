// Problem Link --> https://www.codingninjas.com/studio/problems/delete-node-of-linked-list_8160463
#include<bits/stdc++.h>
using namespace std;

  class Node {
 
  public:
      int data;
      Node* next;
      Node() : data(0), next(nullptr) {}
      Node(int x) : data(x), next(nullptr) {}
      Node(int x, Node* next) : data(x), next(next) {}
  };
 

Node *deleteLast(Node *list){
    // Write your code here
    Node* temp = list;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    temp->next = NULL;
    return list;
}
// Problem Link --> https://www.codingninjas.com/studio/problems/delete-last-node-of-a-doubly-linked-list_8160469
#include<bits/stdc++.h>
using namespace std;
/*
 * Definition for doubly-linked list.
 */
  struct Node {
       int data;
       Node *prev;
       Node *next;
       Node() : data(0), prev(nullptr), next(nullptr) {}
       Node(int val) : data(val), prev(nullptr), next(nullptr) {}
       Node(int val, Node *p, Node *n) : data(val), prev(p), next(n) {}
  };

  Node * deleteLastNode(Node *head) {
    // Write your code here
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    temp->next = NULL;
    return head;
}
// Problem Link --> https://www.codingninjas.com/studio/problems/insert-at-end-of-doubly-linked-list_8160464
#include<bits/stdc++.h>
using namespace std;
/*
 * Definition for doubly-linked list.
 */
  struct Node {
       int value;
       Node *prev;
       Node *next;
       Node() : value(0), prev(nullptr), next(nullptr) {}
       Node(int val) : value(val), prev(nullptr), next(nullptr) {}
       Node(int val, Node *p, Node *n) : value(val), prev(p), next(n) {}
  };

  Node * insertAtTail(Node *head, int k) {
    // Write your code here
    if(head == NULL){
        Node* newNode = new Node(k);
        head = newNode;
        return head;
    };
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(k);
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}
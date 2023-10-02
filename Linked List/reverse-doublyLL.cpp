// Problem Link --> https://www.codingninjas.com/studio/problems/reverse-a-doubly-linked-list_1116098
#include<bits/stdc++.h>
using namespace std;
/*
 * Definition for doubly-linked list.
 */
  class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

Node* reverseDLL(Node* head)
{   
    // Write your code here   
    if(head == NULL) return NULL;
    Node* temp = NULL;
    while(head!=NULL){
        temp = head;
        head = head->next;
        swap(temp->next, temp->prev);
    }
    return temp;
}
// Problem Link --> https://www.codingninjas.com/studio/problems/reverse-linked-list_920513
#include<bits/stdc++.h>
using namespace std;
/****************************************************************
    Following is the class structure of the Node class:
*****************************************************************/
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
        
Node* reverseLinkedList(Node *head)
{
    // Write your code here
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* next_p;
    while(curr){
        next_p = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next_p;
    }
    head = prev;
    return head;
}
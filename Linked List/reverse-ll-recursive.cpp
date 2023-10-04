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
    Node* newHead = reverseLinkedList(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
    
}
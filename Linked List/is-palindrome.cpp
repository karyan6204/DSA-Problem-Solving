// Problem Link --> https://www.codingninjas.com/studio/problems/check-if-linked-list-is-palindrome_985248
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



Node* reverse(Node* ptr){
    Node* prev = NULL;
    Node* nex = NULL;
    while(ptr!=NULL){
        nex = ptr->next;
        ptr->next = prev;
        prev = ptr;
        ptr = nex;
    }
    return prev;
}

bool isPalindrome(Node *head)
{
    // write your code here
    if(head == NULL || head->next == NULL) return true;
    Node* slow = head;
    Node* fast = head;
    while(fast->next && fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->next = reverse(slow->next);
    slow = slow->next;
    Node* dummy = head;
    while(slow!=NULL){
        if(dummy->data!=slow->data) return false;
        dummy = dummy->next;
        slow = slow->next;
    }
    return true;
}
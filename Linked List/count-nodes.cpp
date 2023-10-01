//Problem Link --> https://www.codingninjas.com/studio/problems/count-nodes-of-linked-list_5884
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

int length(Node *head)
{
	//Write your code here
    if(head == NULL) return -1;
    Node* temp = head;
    int count = 0;
    while(temp){
        count++;
        temp = temp->next;
    }
    return count;
}
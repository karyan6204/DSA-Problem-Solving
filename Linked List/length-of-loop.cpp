// Problem Link --> https://www.codingninjas.com/studio/problems/find-length-of-loop_8160455
#include<bits/stdc++.h>
using namespace std;
/**
 * Definition of linked list:
 **************************************************************************/
class Node {
public:
     int data;
     Node *next;
 
     Node(int data) {
         this->data = data;
         this->next = NULL;
     }
};

int lengthOfLoop(Node *head) {
    // Write your code here
    Node* slow = head;
    Node* fast = head;
    int cnt = 0;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            slow = slow->next;
            cnt++;
            while(slow!=fast){
                slow=slow->next;
                cnt++;
            }
            return cnt;
        }
    }
    return NULL;
}

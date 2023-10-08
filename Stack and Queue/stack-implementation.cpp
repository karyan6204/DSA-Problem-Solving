// Problem Link --> https://www.codingninjas.com/studio/problems/stack-implementation-using-array_3210209
#include<bits/stdc++.h>
using namespace std;
// Stack class.
class Stack {
    private: 
    int *arr;
    int size;
    int tops;
public:
    
    Stack(int capacity) {
        // Write your code here.
        this->size = capacity;
        arr = new int[size];
        tops = -1;
    }

    void push(int num) {
        // Write your code here.
        if(!isFull()){
            tops++;
            arr[tops] = num;
        }else{
            return;
        }
    }

    int pop() {
        // Write your code here.
        if(!isEmpty()){
            int ans = arr[tops];
            tops--;
            return ans;
        }else{
            return -1;
        }
    }
    
    int top() {
        // Write your code here.
        if(tops!=-1){
            return arr[tops];
        }else{
            return -1;
        }
    }
    
    int isEmpty() {
        // Write your code here.
        if(tops == -1) return 1;
        return 0;
    }
    
    int isFull() {
        // Write your code here.
        if(tops == size-1) return 1;
        return 0;
    }
    
};

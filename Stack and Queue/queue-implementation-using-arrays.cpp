// Problem Link --> https://www.codingninjas.com/studio/problems/implement-queue-using-arrays_8390825
#include<bits/stdc++.h>
using namespace std;
class Queue {

	int front, rear;
	vector<int> arr;

public:
	Queue()
	{
		front = 0;
		rear = 0;
		arr.resize(100001);
	}

	// Enqueue (add) element 'e' at the end of the queue.
	void enqueue(int e)
	{
		// Write your code here.
		if(rear!=arr.size()){
			arr[rear] = e;
			rear++;
		}else{
			return;
		}
		
	}

	// Dequeue (retrieve) the element from the front of the queue.
	int dequeue()
	{
		// Write your code here.
		if(front == rear){
			rear = front = 0;
			return -1;
		}
		int ans = arr[front];
		front++;
		return ans;
	}
};
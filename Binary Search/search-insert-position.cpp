// Problem Link --> https://www.codingninjas.com/studio/problems/algorithm-to-find-best-insert-position-in-sorted-array_839813

#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& arr, int m)
{
	// Write your code here.
	int low = 0, high = arr.size()-1, ans = arr.size();
	while(low<=high){
		int mid = low+(high-low)/2;
		if(arr[mid] >= m){
			ans = mid;
			high = mid - 1;
		}else{
			low = mid + 1;
		}
	}
	return ans;
}

int main(){
    vector<int> arr = {1, 2, 2, 3, 3, 5};
    int ans = searchInsert(arr, 4);
    cout<<"The lower bound is at index: "<<ans<<" (0-based)"<<endl;
    return 0;
}
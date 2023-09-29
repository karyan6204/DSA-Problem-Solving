// Problem Link --> https://www.codingninjas.com/studio/problems/implement-upper-bound_8165383
#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &arr, int x, int n){
	// Write your code here..	
	int low = 0, high = n-1, ans = n;
	while(low<=high){
		int mid = low+(high-low)/2;
		if(arr[mid]>x){
			ans = mid;
			high = mid-1;
		}else{
			low = mid+1;
		}
	}
	return ans;
}

int main(){
    vector<int> arr = {1, 2, 2, 3, 3, 5};
    int ans = upperBound(arr, 6, 2);
    cout<<"The lower bound is at index: "<<ans<<" (0-based)"<<endl;
    return 0;
}
// Problem Link --> https://www.codingninjas.com/studio/problems/occurrence-of-x-in-a-sorted-array_630456
#include<bits/stdc++.h>
using namespace std;

int firstOccur(vector<int>& arr, int n, int x){
	int low = 0, high = n-1, ans = -1;
	while(low<=high){
		int mid = low+(high-low)/2;
		if(arr[mid]>=x){
			ans = mid;
			high = mid-1;
		}else{
			low = mid+1;
		}
	}
	return ans;
}

int lastOccur(vector<int>& arr, int n, int x){
	int low = 0, high = n-1, ans = -1;
	while(low<=high){
		int mid = low+(high-low)/2;
		if(arr[mid]<=x){
			ans = mid;
			low = mid+1;
		}else{
			high = mid-1;
		}
	}
	return ans;
}

int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int ans = 0;
	int first = firstOccur(arr, n, x);
	int last = lastOccur(arr, n, x);
	if(first == -1){
		ans = 0;
	}else{
		ans = last-first+1;
	}
	return ans;
}

int main(){
    int n = 8, x = 2;
    vector<int> arr = {0, 0, 1, 1, 2, 2, 2, 2,};
    int ans = count(arr, n, x);
    cout<<ans<<endl;
}
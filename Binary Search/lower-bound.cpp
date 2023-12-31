// Problem Link --> https://www.codingninjas.com/studio/problems/lower-bound_8165382

#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int low = 0, high = n-1, ans = n;
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

int main(){
    vector<int> arr = {1, 2, 2, 3, 3, 5};
    int ans = lowerBound(arr, 6, 2);
    cout<<"The lower bound is at index: "<<ans<<" (0-based)"<<endl;
    return 0;
}
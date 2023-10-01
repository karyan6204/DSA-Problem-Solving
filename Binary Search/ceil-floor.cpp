// Problem Link --> https://www.codingninjas.com/studio/problems/ceiling-in-a-sorted-array_1825401
#include<bits/stdc++.h>
using namespace std;

int getFloor(vector<int>& a ,int n, int x){
	int ans = -1;
	int low = 0, high = n-1;
	while(low<=high){
		int mid = low+(high-low)/2;
		if(a[mid]<=x){
			ans = a[mid];
			low = mid+1;
		}else{
			high = mid-1;
		}
	}
	return ans;
}
int getCeil(vector<int>& a ,int n, int x){
	int ans = -1;
	int low = 0, high = n-1;
	while(low<=high){
		int mid = low+(high-low)/2;
		if(a[mid]>=x){
			ans = a[mid];
			high = mid-1;
		}else{
			low = mid+1;
		}
	}
	return ans;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	pair<int,int> ans;
	ans.first = getFloor(a, n, x);
	ans.second = getCeil(a, n, x);
	return ans;
}

int main(){
    int n = 6, x = 8;
    vector<int> arr = {3, 4, 4, 7, 8, 10};
    pair<int,int> result = getFloorAndCeil(arr, n, x);
    cout<<result.first<<" "<<result.second<<endl;
    return 0;
}
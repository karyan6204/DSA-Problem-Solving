// Problem Link --> https://www.codingninjas.com/studio/problems/rotated-array_1093219
#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& arr)
{
	// Write your code here.
	int low = 0, high = arr.size()-1, ans = INT_MAX;
	while(low<=high){
		int mid = low+(high-low)/2;
		if(arr[low]<arr[high]){
			ans = min(arr[low], ans);
			break;
		}else{
			if(arr[low]<=arr[mid]){
				ans = min(arr[low], ans);
				low = mid+1;
			}else{
				ans = min(arr[mid], ans);
				high = mid-1;
			}
		}
		
	}
	return ans;
}

int main(){
    vector<int> arr = {3, 4, 5, 0, 1, 2};
    bool ans = findMin(arr);
    cout<<ans<<endl;
}
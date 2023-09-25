// Problem Link --> https://www.codingninjas.com/studio/problems/remove-duplicates-from-sorted-array_1102307

#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int count = 1;
	for(int i=1; i<n; i++){
		if(arr[i]!=arr[i-1]){
			count++;
		}
	}
	return count;
}

int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    cout<<removeDuplicates(arr, n)<<endl;
}
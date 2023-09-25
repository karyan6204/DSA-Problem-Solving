// Problem Link --> https://www.codingninjas.com/studio/problems/find-the-single-element_6680465

#include<bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr){
	// Write your code here.
	int res = 0;
	for(int i=0; i<arr.size(); i++){
		res = res^arr[i];
	}	
	return res;
}

int main(){
    int n, num; cin>>n>>num;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    cout<<getSingleElement(arr)<<endl;
}
// Problem Link --> https://www.codingninjas.com/studio/problems/-print-n-times_8380707
#include<bits/stdc++.h>
using namespace std;

void rec(vector<string>& ans, int n, int x){
	if(x > n) return;
	ans.push_back("Coding Ninjas");
	rec(ans, n, x+1);
}

vector<string> printNTimes(int n) {
	// Write your code here.
	vector<string> ans;
	int x = 1;
	rec(ans, n, x);
	return ans;
}

int main(){
    vector<string> arr = printNTimes(5);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
// Problem Link --> 

#include<bits/stdc++.h>
using namespace std;

void rec(vector<int>& ans, int n, int i){
    if(i>=n) return;
    if(i<=1){
        ans.push_back(i);
    }else{
        ans.push_back(ans[i-1]+ans[i-2]);
    }
    rec(ans, n, i+1);
}

vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int> ans;
    rec(ans, n, 0);
    return ans;
}

int main(){
    vector<int> arr = generateFibonacciNumbers(5);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
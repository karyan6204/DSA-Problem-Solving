// Problem Link --> https://www.codingninjas.com/studio/problems/rotate-array_1230543

#include <bits/stdc++.h> 
using namespace std;

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());
    reverse(arr.begin(), arr.end());
    return arr;
}

int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> ans = rotateArray(arr, n);
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
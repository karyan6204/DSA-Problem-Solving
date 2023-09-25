// Problem Link --> https://www.codingninjas.com/studio/problems/ninja-and-the-zero-s_6581958

#include <bits/stdc++.h> 
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    int j = 0;
    for(int i=0; i<n; i++){
        if(a[i] != 0){
            swap(a[i],a[j]);
            j++;
        }
    }
    return a;
}

int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> ans = moveZeros(n, arr);
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
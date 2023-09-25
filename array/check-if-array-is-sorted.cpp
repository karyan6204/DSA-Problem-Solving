// Problem Link --> https://www.codingninjas.com/studio/problems/ninja-and-the-sorted-check_6581957

#include <bits/stdc++.h> 
using namespace std;

int isSorted(int n, vector<int> a) {
    // Write your code here.
    int flag = 0;
    for(int i=0; i<n-1; i++){
        if(a[i]>a[i+1]){
            flag = 1;
            break;
        }
    }
    if(flag){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans = isSorted(n, arr);
    if(ans){
        cout<<"SORTED"<<endl;
    }else{
        cout<<"NOT SORTED"<<endl;
    }
}
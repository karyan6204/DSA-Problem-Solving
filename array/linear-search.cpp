// Problem Link --> 

#include<bits/stdc++.h>
using namespace std;

int linearSearch(int n, int num, vector<int> &arr)
{
    // Write your code here.
    for(int i=0; i<n; i++){
        if(arr[i] == num){
            return i;
        }
    }
    return -1;
}

int main(){
    int n, num; cin>>n>>num;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    cout<<linearSearch(n, num, arr)<<endl;
}
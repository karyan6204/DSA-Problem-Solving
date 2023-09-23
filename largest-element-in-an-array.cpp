#include <bits/stdc++.h> 
using namespace std;

int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans = largestElement(arr, n);
    cout<<ans<<endl;
}
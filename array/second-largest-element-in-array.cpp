// Problem Link --> https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960

#include <bits/stdc++.h> 
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int maxi = INT_MIN, mini = INT_MAX;
    int ans1 = INT_MIN, ans2 = INT_MAX;
    for(int i=0; i<n; i++){
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);
    }
    for(int i=0; i<n; i++){
        if(a[i]!=maxi){
            ans1 = max(ans1, a[i]);
        }
    }
    for(int i=0; i<n; i++){
        if(a[i] != mini){
            ans2 = min(ans2, a[i]);
        }
    }
    vector<int> ans;
    ans.push_back(ans1);
    ans.push_back(ans2);
    return ans;
}

int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> ans = getSecondOrderElements(n, arr);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
// Problem Link --> 
#include <bits/stdc++.h> 
using namespace std;

int getLongestSubarray(vector<int>& nums, int k){
    // Write your code here
    map<int, int> mp;
    int ans = 0, sum = 0;
    for(int i=0; i<nums.size(); i++){
        sum+=nums[i];
        if(sum == k){
            ans = i+1;
        }
        int rem = sum-k;
        if(mp.find(rem)!=mp.end()){
            ans = max(ans, i-mp[rem]);
        }
        if(mp.find(sum) == mp.end()){
            mp[sum] = i;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {9,6,4,2,3,5,7,0,1};
    cout<<getLongestSubarray(arr, 10)<<endl;
}
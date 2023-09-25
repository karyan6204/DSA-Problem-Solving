//Problem Link --> 

#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, ans = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                cnt++;
                ans = max(ans,cnt);
            }else{
                cnt = 0;
            }
        }
        return ans;
    }

int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    cout<<findMaxConsecutiveOnes(arr)<<endl;
}
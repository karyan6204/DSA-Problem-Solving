// Problem Link --> https://www.codingninjas.com/studio/problems/linear-search_6922070?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
        int res = 0, sum = 0;
        for(int i=0; i<=nums.size(); i++){
            res+=i;
        }
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
        }
        int ans = res-sum;
        return ans;
    }

int main(){
    vector<int> arr = {9,6,4,2,3,5,7,0,1};
    cout<<missingNumber(arr)<<endl;
}
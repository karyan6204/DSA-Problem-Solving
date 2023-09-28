// Problem Link --> https://www.codingninjas.com/studio/problems/binary-search_972

#include<bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target) {
    // Write your code here.
    int low = 0, high = nums.size()-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid] == target){
            return mid;
        }else if(nums[mid]<target){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {2, 3, 5, 12, 15, 20, 25, 30, 45, 50};
    int ans = search(arr, 45);
    cout<<"This element is present at index: "<<ans<<" (0-based)"<<endl;
    return 0;
}
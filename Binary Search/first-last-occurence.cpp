// Problem Link --> https://www.codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549
#include<bits/stdc++.h>
using namespace std;

int firstPosition(vector<int>& arr, int n, int k){
    int ans = -1;
    int low = 0, high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==k){
            ans = mid;
            high = mid-1;
        }else if(arr[mid]>k){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return ans;
}

int lastPosition(vector<int>& arr, int n, int k){
    int ans = -1;
    int low = 0, high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==k){
            ans = mid;
            low = mid+1;
        }else if(arr[mid]>k){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int> ans;
    ans.first = firstPosition(arr, n, k);
    ans.second = lastPosition(arr, n, k);
    return ans;
}


int main(){
    int n = 8, x = 2;
    vector<int> arr = {0, 0, 1, 1, 2, 2, 2, 2,};
    pair<int,int> result = firstAndLastPosition(arr, n, x);
    cout<<result.first<<" "<<result.second<<endl;
    return 0;
}
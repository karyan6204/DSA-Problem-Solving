// Problem Link --> https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_1082554
#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int low = 0, high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid] == k){
            return mid;
        }
        // if left part is sorted
        if(arr[low]<=arr[mid]){
            // if the target is present in this part
            if(arr[low]<=k && k<=arr[mid]){
                high = mid-1;
            }else{
            // if the target is present in the right part
                low = mid+1;
            }
        }else{
        // if right part is sorted
            // if the target is present in this part
            if(arr[mid]<=k && k<=arr[high]){
                low = mid+1;
            }else{
            // if the target is present in the left part of this side
                high = mid-1;
            }
        }
    }
    return -1;
}


int main(){
    int n = 4, x = 9;
    vector<int> arr = {8, 9, 4, 5};
    int ans = search(arr, n, x);
    cout<<ans<<endl;
}
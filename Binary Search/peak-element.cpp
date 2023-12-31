// Problem Link --> https://www.codingninjas.com/studio/problems/find-peak-element_1081482
#include<bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &arr) {
    // Write your code here
    int n = arr.size();
    if(arr[0]>arr[1]) return 0;
    if(arr[n-1]>arr[n-2]) return n-1;
    int low = 1, high = n-2;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }
        if (arr[mid] > arr[mid - 1]) {
            low = mid + 1;
        }else{
            high = mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {1, 8, 1, 5, 3};
    cout<<findPeakElement(arr)<<endl;
}
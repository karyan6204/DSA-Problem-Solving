// Problem Link --> https://www.codingninjas.com/studio/problems/rotation_7449070
#include<bits/stdc++.h>
using namespace std;

int findKRotation(vector<int> &arr){
    // Write your code here.  
    int low = 0, high = arr.size()-1, ans = INT_MAX, index = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[low] <= arr[high]){
            if(arr[low]<ans){
                index = low;
                ans = low;
                break;
            }
            low = mid+1;
        }
        if(arr[low]<=arr[mid]){
            if(arr[low]<ans){
                ans = arr[low];
                index = low;
            }
            low = mid+1;
        }else{
            if(arr[mid]<ans){
                ans = arr[mid];
                index = mid;
            }
            high = mid-1;
        }
    }  
    return index;
}

int main(){
    vector<int> arr = {2, 3, 4, 1};
    int ans = findKRotation(arr);
    cout<<ans<<endl;
}
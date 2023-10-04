// Problem Link --> https://www.codingninjas.com/studio/problems/search-in-a-rotated-sorted-array-ii_7449547
#include<bits/stdc++.h>
using namespace std;

bool searchInARotatedSortedArrayII(vector<int>&A, int key) {
    // Write your code here.
    int n = A.size();
    int low = 0, high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(A[mid] == key){
            return true;
        }
        // Edge case for duplicate elements
        if(A[low] == A[mid] && A[mid] == A[high]){
            low++;
            high--;
            continue;
        }
        if(A[low]<=A[mid]){
            if(key>=A[low] && key<=A[mid]){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }else{
            if(key>=A[mid] && key<=A[high]){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
    }
    return false;
}

int main(){
    int n = 4, x = 4;
    vector<int> arr = {3, 4, 5, 0, 0, 1, 2};
    bool ans = searchInARotatedSortedArrayII(arr, x);
    cout<<ans<<endl;
}
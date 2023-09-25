// Problem Link --> https://www.codingninjas.com/studio/problems/sorted-array_6613259?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

#include <bits/stdc++.h> 
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b) {
  // Write your code here
  vector<int> ans;
  int i = 0, j = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            if(ans.size()==0 || ans.back()!=a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }else{
            if(ans.size()==0 || ans.back()!=b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<a.size()){
        if(ans.back()!=a[i]){
            ans.push_back(a[i]);
        }
        i++;
    }
    while(j<b.size()){
        if(ans.back()!=b[j]){
            ans.push_back(b[j]);
        }
        j++;
    }
    return ans;
}

int main(){
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {2, 3, 6, 7};
    
    vector<int> ans = sortedArray(arr1, arr2);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
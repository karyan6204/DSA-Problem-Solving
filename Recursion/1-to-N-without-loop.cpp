// Problem Link --> https://www.codingninjas.com/studio/problems/print-1-to-n_628290

#include<bits/stdc++.h>
using namespace std;

void rec(vector<int>& ans, int x, int i){
    if(i>x) return;
    ans.push_back(i);
    rec(ans, x, i+1);
}

vector<int> printNos(int x) {
    // Write Your Code Here
    int i = 1;
    vector<int> ans;
    rec(ans, x, i);
    return ans;
}

int main(){
    vector<int> arr = printNos(5);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
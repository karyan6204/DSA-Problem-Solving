// Problem Link --> https://www.codingninjas.com/studio/problems/n-to-1-without-loop_8357243

#include<bits/stdc++.h>
using namespace std;

void rec(vector<int>& ans, int x){
    if(x == 0) return;
    ans.push_back(x);
    rec(ans, x-1);
}

vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> ans;
    rec(ans, x);
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
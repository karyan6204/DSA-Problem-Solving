
#include<bits/stdc++.h>
using namespace std;

bool rec(string& str, int i){
    if(i>=str.size()/2) return true;
    if(str[i]!=str[str.size()-1-i]) return false;
     return rec(str, i+1);
}

bool isPalindrome(string& str) {
    // Write your code here.
    return rec(str, 0);
}

int main(){
    string s; cin>>s;
    bool ans = isPalindrome(s);
    if(ans){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    return 0;
}
// Problem Link --> 
#include<bits/stdc++.h>
using namespace std;

void rec(long long n, long long& sum){
    if(n<1){
        return;
    }
    sum+=n;
    rec(n-1, sum);
}

long long sumFirstN(long long n) {
    // Write your code here.
    long long sum = 0;
    rec(n, sum);
    return sum;
}

int main(){
    long long ans = sumFirstN(5);
    cout<<ans<<endl;
    return 0;
}
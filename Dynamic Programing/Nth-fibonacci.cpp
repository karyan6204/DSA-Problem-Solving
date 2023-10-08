// Problem Link --> https://www.codingninjas.com/studio/problems/nth-fibonacci-number_74156
#include<bits/stdc++.h>
using namespace std;

int dp[10005];

int fib(int n){
        if(n == 0) return 0;
        if(n == 1) return 1;
        if(dp[n]!=-1) return dp[n];
        return dp[n] = fib(n-1) + fib(n-2);
}

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        for(int i=0; i<10005; i++) dp[i] = -1;
        int n; cin>>n;
        int ans = fib(n);
        cout<<ans<<endl;
}
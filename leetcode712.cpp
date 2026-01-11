#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
int help(string &s1,string &s2,int i, int j ,vector<vector<int>> &dp,int m,int n ){
    if(i>=m&&j>=n){
        return 0;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    if(i>=m){
        return dp[i][j]=s2[j]+help(s1,s2,i,j+1,dp, m,n);
    }
    if (j>=n){
        return dp[i][j]=s1[i]+help(s1,s2,i+1,j,dp, m,n);

    }
    if(s1[i]==s2[j]){
        return dp[i][j]=help(s1,s2,i+1,j+1,dp,m,n);

    }
    else {
        int a=s1[i]+help(s1,s2,i+1,j,dp, m, n);
        int b=s2[j]+help(s1,s2,i,j+1,dp, m,n);
          return dp[i][j]=min(a,b);

    }
}

    int minimumDeleteSum(string s1, string s2) {
        int m=s1.size();
        int n=s2.size();
        vector<vector<int>> dp(1001,vector<int> (1001,-1));
        return help(s1,s2,0,0,dp,m,n);
        
    }
};
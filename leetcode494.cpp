#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
int dp[22][20005];
int dp2[22][20005];
 void f(vector<int> &nums,int &target,int s,int &n,int i,int &ans){
    if((i==n)&&(target==s)){
        ans++; 
        return;  
    }
    if(i>=n) return;
    if((s<0)&&(dp2[i][abs(s)]!=-1)){
          ans=ans+dp2[i][abs(s)];
          return;
    }
    if(s>=0&&(dp[i][s]!=-1)){  
        ans=ans+dp[i][s];
        return;
    }
    int a=ans;
        f(nums,target,s-nums[i],n,i+1,ans);
        f(nums,target,s+nums[i],n,i+1,ans);
        if(s<0) dp2[i][abs(s)]=ans-a;
        if(s>=0) dp[i][s]=ans-a;
return ;
 }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=0;
        memset(dp,-1,sizeof(dp));
        memset(dp2,-1,sizeof(dp2));
        f(nums,target,0,n,0,ans);
        return ans;

        
    }
};
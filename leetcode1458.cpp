#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
int help(vector<int> &nums1,vector<int> &nums2,int i, int j, vector<vector<int>> &dp,int &n,int &m){
    if(i>=n||j>=m) return -1*1e8;
    if(dp[i][j]!=-1) return dp[i][j];
    int a=nums1[i]*nums2[j];
    int b=nums1[i]*nums2[j]+help(nums1,nums2,i+1,j+1,dp,n,m);
    int c=help(nums1,nums2,i+1,j,dp,n,m);
    int d=help(nums1,nums2,i,j+1,dp,n,m);
    return dp[i][j]=max(a,max(b,max(c,d)));
}
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
int n=nums1.size();
int m=nums2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        int ans=help(nums1,nums2,0,0,dp,n,m);
        return ans;   
    }
};
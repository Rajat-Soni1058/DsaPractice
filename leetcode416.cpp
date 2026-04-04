#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
int a[205][20005];
bool f(vector<int> &nums,int &sum,int i,int &n,int s){
     if(s==(sum-s)) return true;
    if(s>(sum-s)) return false;
    if(i>=n) return false;
    if(a[i][s]!=-1) return a[i][s];
    bool taken =f(nums,sum,i+1,n,s+nums[i]);
    bool nottaken=f(nums,sum,i+1,n,s);
    
    return a[i][s]=(taken|nottaken);
}
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        if(n==1) return false;
        memset(a,-1,sizeof(a));
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
        }
        if(sum%2!=0) return false;
        bool ans=f(nums,sum,0,n,0);
        return ans;


        
        
    }
};

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
void f(vector<int> &nums,vector<vector<int>>&ans,int &n,int i,vector<int> v){
    if(i>=n){
ans.push_back(v);
return ;
    }
    int k=v.size();
      if(k>0&&v[k-1]==nums[i]){
        v.push_back(nums[i]);
        f(nums,ans,n,i+1,v);
      }
      else{
        f(nums,ans,n,i+1,v);
        v.push_back(nums[i]);
        f(nums,ans,n,i+1,v);
      }
      return ;
    
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
           sort(nums.begin(),nums.end());
           vector<vector<int>> ans;
           vector<int> v;
           f(nums,ans,n,0,v);
           return ans;

        
    }
};
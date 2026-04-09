#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
void f(vector<int> &nums,vector<vector<int>> &ans,int idx,int &n,vector<int> v){
    if(nums.size()==0){
        ans.push_back(v);
        return;
    }
    for(int i=0;i<nums.size();i++){
        v.push_back(nums[i]);
        int temp=nums[i];
        nums.erase(nums.begin()+i);
        f(nums,ans,i,n,v);
        nums.insert(nums.begin() + i, temp);
        v.pop_back();
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        vector<int> v;
        f(nums,ans,0,n,v);
        return ans;
        
    }
};
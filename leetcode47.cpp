#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
void f(vector<vector<int>>&ans,vector<int> nums,vector<int> v){
    if(nums.size()==0){
        ans.push_back(v);
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(i!=0&&nums[i]==nums[i-1]){
            continue;
        }
        int temp=nums[i];
        v.push_back(nums[i]);
        nums.erase(nums.begin()+i);
        f(ans,nums,v);
        v.pop_back();
        nums.insert(nums.begin()+i,temp);
    }
    return;
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        vector<int> v;
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        f(ans,nums,v);
        return ans;
        
    }
};
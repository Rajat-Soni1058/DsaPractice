#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n=nums.size();
        vector<int> v=nums;
        sort(v.begin(),v.end());
        if(nums[0]!=v[0]&&nums[0]!=v[1]){
            return nums[0]+v[0]+v[1];
        }
        else {
            return v[0]+v[1]+v[2];
        }
        
    }
};
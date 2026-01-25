#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int i=0;
        int j=k-1;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mini=INT_MAX;
        while(j<n){
            mini=min(mini,nums[j]-nums[i]);
            i++;
            j++;
            
        }
        return mini;
        
    }
};
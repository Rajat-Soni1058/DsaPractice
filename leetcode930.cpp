#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        unordered_map<int,int> mp;
        vector<int> sum(n);
        sum[0]=nums[0];
        mp[sum[0]]++;
        int count=0;
        if(sum[0]==goal) count++;
        for(int i=1;i<n;i++){
            sum[i]=sum[i-1]+nums[i];
            if(sum[i]==goal) count++;
            if(mp.find(sum[i]-goal)!=mp.end()){
                count=count+mp[sum[i]-goal];
            }
             mp[sum[i]]++;
        }
        return count;
        
    }
};
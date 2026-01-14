#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> m;
        int n=nums.size()/2;
        for(int i=0;i<2*n;i++){
            m[nums[i]]++;

        }
        int ans =0;
        for(auto x:m){
            if(x.second==n){
ans=x.first;
            }
        }
        return ans;
        
    }
};